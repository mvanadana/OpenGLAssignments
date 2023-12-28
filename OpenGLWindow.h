#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QList>
#include <QVector3D>
#include <QPushButton>
#include <QColor>

#include "Shape.h"
#include "point.h"

class QOpenGLShader;
class QOpenGLShaderProgram;

class OpenGLWindow : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

signals:
    void shapesUpdated();

public:
    OpenGLWindow(const QColor& background, QWidget* parent);
    ~OpenGLWindow();

    void addLines(Line line);
    void addPolygons(Shape* s);
    void addClippingPolygon(Shape* s);
    void addHermiteCurve(std::vector<Point> points);
    void addBezierCurve(std::vector<Point> points);
    void addBSplineCurve(std::vector<Point> points);
    void clipPolygons();
    void drawGrid(int mGridSize);
    void setColor(const QColor& color);
    const QColor& getColor() const;
    void updateColorInShader(const QColor& color);
    void updateFigurePosition(float xTranslate, float yTranslate);
    void updateRotation(float angle);

    
protected:
    void paintGL() override;
    void initializeGL() override;
    

private slots:
    void shaderWatcher();
public slots:
    void updateColor();
    void changeColor();
    
    
private:
    void reset();
    void setupMatrix();
    void addClippingPolygonVertices(QVector<GLfloat>& vertices, QVector<GLfloat>& colors);
    void addPolygonsVertices(QVector<GLfloat>& vertices, QVector<GLfloat>& colors);
    void addLinesVertices(QVector<GLfloat>& vertices, QVector<GLfloat>& colors);
    void addShapeVertices(Shape shape, QVector<GLfloat>& vertices, QVector<GLfloat>& colors, float red, float green, float blue);
    void addCurveLines(const std::vector<Point>& points);
    void drawVertices(const QVector<GLfloat>& vertices, const QVector<GLfloat>& colors);
    void createFill(std::vector<float>squareVertices);
    void fillSquare(std::vector<float>squareVertices, QVector3D fillColor);
  //  void resizeGL(int w, int h);
    void mouseMoveEvent(QMouseEvent* event);
    QString readShader(QString filepath);

private:
    bool mAnimating = false;
    QOpenGLContext* mContext = nullptr;
    QOpenGLShader* mVshader = nullptr;
    QOpenGLShader* mFshader = nullptr;
    QOpenGLShaderProgram* mProgram = nullptr;
    QOpenGLBuffer mVbo;
    int mVertexAttr;
    int mNormalAttr;
    int mMatrixUniform;
    GLint m_posAttr = 0;
    GLint m_colAttr = 0;
    GLint m_matrixUniform = 0;
    QColor mBackground;
    QMetaObject::Connection mContextWatchConnection;

    Shape mClippingPolygon;
    std::vector<Shape> mPolygons;
    std::vector<Line> mLines;
    std::vector<float> mPixelVertices;
    int mGridSize;
    QVector<GLfloat> vertices;
    QVector<GLfloat> colors;
    GLenum str = GL_LINES;
    QQuaternion rotationAngle;
    float rotation = 0.0f;
    QPoint lastPos;
    QFileSystemWatcher* mShaderWatcher;

    QColor color;
    
};