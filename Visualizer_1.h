#pragma once

#include <QtWidgets/QMainWindow>
#include "Point.h"
#include "SimpleDDA.h"
#include <vector>
#include <QOpenGLFunctions>
#include <QOpenGLWidget>
#include <QColorDialog>

class OpenGLWindow;

class Visualizer_1 : public QMainWindow, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    Visualizer_1(QWindow* parent = nullptr);
    ~Visualizer_1();
    void drawLine(Point& point1, Point& point2);
  


private:
    void setupUi();
    std::vector<float>  mVerticess;
    std::vector<float>  mColorss;
    QVector<GLfloat>   mVertices;
    QVector<GLfloat>   mColors;

private slots:
    void addPoints();
    void addRegion();
    void addLine();
    void addPolygon();
    void clipPolygon();
    void addGrid();
    void beizerCurve();
    void hermiteCurve();
    void addBSpline();
    void addColor();
    void addTranslateCoordinates();
    void clearPoints();
    void addRotate();
   
    
signals:
    void colorSelected(const QColor& color);

private:
    QWidget* mCentralWidget;
    QWidget* mGridLayoutWidget;
    QGridLayout* mGridLayout;
    QHBoxLayout* mHorizontalLayout7;
    QHBoxLayout* mHorizontalLayout8;
    QPushButton* mPushButton4;
    QPushButton* mPushButton3;
    QPushButton* mPushButton5;
    QPushButton* mPushButton6;
    QPushButton* mPushButton7;
    QPushButton* mPushButton8;
    QPushButton* mPushButton9;
    QPushButton* mPushButton10;
    QPushButton* mPushButton11;
    QPushButton* mPushButton12;
    QPushButton* mPushButton13;
    QPushButton* mPushButton14;
    QHBoxLayout* mHorizontalLayout10;
    QVBoxLayout* mVerticalLayout3;
    QVBoxLayout* mVerticalLayout5;
    QHBoxLayout* mHorizontalLayout5;
    QDoubleSpinBox* mDoubleSpinBox5;
    QDoubleSpinBox* mDoubleSpinBox6;
    QPushButton* mPushButton2;
    QListWidget* mListWidget3;
    OpenGLWindow* mOpenGLWidget;
    QTabWidget* mTabWidget;
    SimpleDDA simpleDDAobj;
    std::vector<Point> mPoints;
    int gridSize;
    float angle;
    
};