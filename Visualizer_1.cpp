#include "stdafx.h"
#include "Visualizer_1.h"
#include "OpenGLWindow.h"


Visualizer_1::Visualizer_1(QWindow* parent) : QMainWindow(nullptr)
{
    setupUi();
    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::cyan); // Set window background color
    setPalette(pal);
    centralWidget()->setAutoFillBackground(true);

    connect(mOpenGLWidget, SIGNAL(shapesUpdated()), mOpenGLWidget, SLOT(update()));

}

Visualizer_1::~Visualizer_1()
{}

void Visualizer_1::setupUi()
{
    resize(861, 621);
    mCentralWidget = new QWidget(this);
    mGridLayoutWidget = new QWidget(mCentralWidget);
    mGridLayoutWidget->setGeometry(QRect(0, 0, 861, 621));
    mGridLayout = new QGridLayout(mGridLayoutWidget);
    mGridLayout->setSpacing(6);
    mGridLayout->setContentsMargins(11, 11, 11, 11);

    //First, show mHorizontalLayout9
    QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);

    mOpenGLWidget = new OpenGLWindow(QColor(0, 0, 0), mCentralWidget);
    sizePolicy2.setHeightForWidth(mOpenGLWidget->sizePolicy().hasHeightForWidth());
    mOpenGLWidget->setSizePolicy(sizePolicy2);

    mGridLayout->addWidget(mOpenGLWidget, 10, 0, 1, 1);

    // Second, show mHorizontalLayout7
    mHorizontalLayout7 = new QHBoxLayout();
    mHorizontalLayout7->setSpacing(6);
    mPushButton4 = new QPushButton("ADD Region", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton4);

    mPushButton3 = new QPushButton("ADD Polygon", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton3);

    mPushButton5 = new QPushButton("ADD Line", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton5);
    mGridLayout->addLayout(mHorizontalLayout7, 2, 0, 1, 1);
    

     // Third, show mHorizontalLayout10
    mHorizontalLayout10 = new QHBoxLayout();
    mHorizontalLayout10->setSpacing(6);

    // Rest of your existing code for mHorizontalLayout10 continues here

    mVerticalLayout5 = new QVBoxLayout();
    mVerticalLayout5->setSpacing(6);
    mHorizontalLayout5 = new QHBoxLayout();
    mHorizontalLayout5->setSpacing(6);
    QLabel* label_4 = new QLabel("Add Coordinates", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(label_4);

    QLabel* label_7 = new QLabel("X", mGridLayoutWidget);
    QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
    label_7->setSizePolicy(sizePolicy);
    label_7->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

    mHorizontalLayout5->addWidget(label_7);

    mDoubleSpinBox5 = new QDoubleSpinBox(mGridLayoutWidget);
    mDoubleSpinBox5->setMinimum(-100.000000000000000);
    mDoubleSpinBox5->setMaximum(100.000000000000000);
    mHorizontalLayout5->addWidget(mDoubleSpinBox5);

    QLabel* label_8 = new QLabel("Y", mGridLayoutWidget);
    sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
    label_8->setSizePolicy(sizePolicy);
    label_8->setAlignment(Qt::AlignRight | Qt::AlignTrailing | Qt::AlignVCenter);

    mHorizontalLayout5->addWidget(label_8);

    mDoubleSpinBox6 = new QDoubleSpinBox(mGridLayoutWidget);
    mDoubleSpinBox6->setMinimum(-100.000000000000000);
    mDoubleSpinBox6->setMaximum(100.000000000000000);
    mHorizontalLayout5->addWidget(mDoubleSpinBox6);

    mPushButton2 = new QPushButton("ADD", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(mPushButton2);

    mVerticalLayout5->addLayout(mHorizontalLayout5);

    mListWidget3 = new QListWidget(mGridLayoutWidget);
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mListWidget3->sizePolicy().hasHeightForWidth());
    mListWidget3->setSizePolicy(sizePolicy1);

    mVerticalLayout5->addWidget(mListWidget3);

    mHorizontalLayout10->addLayout(mVerticalLayout5);

    mGridLayout->addLayout(mHorizontalLayout10, 3, 0, 1, 1);


    mHorizontalLayout8 = new QHBoxLayout();
    mPushButton6 = new QPushButton("Clip Polygon", mGridLayoutWidget);
    mHorizontalLayout8->addWidget(mPushButton6);
    mPushButton7 = new QPushButton("Draw Grid", mGridLayoutWidget);
    mHorizontalLayout8->addWidget(mPushButton7);
    mGridLayout->addLayout(mHorizontalLayout8, 4, 0, 1, 1);


    mPushButton8 = new QPushButton("Bezier Curve", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton8);

    mVerticalLayout5->addLayout(mHorizontalLayout5);

    mPushButton10 = new QPushButton("BSpline Curve", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton10);

    mVerticalLayout5->addLayout(mHorizontalLayout5);

    mPushButton9 = new QPushButton("Hermite Curve", mGridLayoutWidget);

    mHorizontalLayout7->addWidget(mPushButton9);

    mPushButton11 = new QPushButton("Color", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(mPushButton11);

    mPushButton12 = new QPushButton("Translate", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(mPushButton12);

    mPushButton13 = new QPushButton("Clear Points", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(mPushButton13);
    mPushButton14 = new QPushButton("Rotate", mGridLayoutWidget);

    mHorizontalLayout5->addWidget(mPushButton14);

    mVerticalLayout5->addLayout(mHorizontalLayout5);
    


    QLabel* label = new QLabel("SutherlandHodgman and SimpleDDA", mGridLayoutWidget);
    label->setAlignment(Qt::AlignLeading | Qt::AlignHCenter | Qt::AlignVCenter);

    mGridLayout->addWidget(label, 0, 0, 1, 1);
    connect(mPushButton2, &QPushButton::clicked, this, &Visualizer_1::addPoints);
    connect(mPushButton4, &QPushButton::clicked, this, &Visualizer_1::addRegion);
    connect(mPushButton3, &QPushButton::clicked, this, &Visualizer_1::addPolygon);
    connect(mPushButton5, &QPushButton::clicked, this, &Visualizer_1::addLine);
    connect(mPushButton7, &QPushButton::clicked, this, &Visualizer_1::addGrid);
    connect(mPushButton6, &QPushButton::clicked, this, &Visualizer_1::clipPolygon);
    connect(mPushButton8, &QPushButton::clicked, this, &Visualizer_1::beizerCurve);
    connect(mPushButton9, &QPushButton::clicked, this, &Visualizer_1::hermiteCurve);
    connect(mPushButton10, &QPushButton::clicked, this, &Visualizer_1::addBSpline);
    connect(mPushButton11, &QPushButton::clicked, this, &Visualizer_1::addColor);
    connect(mPushButton12, &QPushButton::clicked, this, &Visualizer_1::addTranslateCoordinates);
    connect(mPushButton13, &QPushButton::clicked, this, &Visualizer_1::clearPoints);
    connect(mPushButton14, &QPushButton::clicked, this, &Visualizer_1::addRotate);

    setCentralWidget(mCentralWidget);
}
void Visualizer_1::addPoints()
{
    double xValue = mDoubleSpinBox5->value();
    double yValue = mDoubleSpinBox6->value();

    // Create a string representation of the values
    QString itemText = QString("X: %1, Y: %2").arg(xValue).arg(yValue);
    Point p(xValue, yValue);
    mPoints.push_back(p);

    // Add the item to the QListWidget
    QListWidgetItem* newItem = new QListWidgetItem(itemText);
    mListWidget3->addItem(newItem);
}
void Visualizer_1::addRegion()
{
    if (mPoints.size() < 3) {
        // At least three points are needed to create a polygon
        QMessageBox::warning(this, "Error", "At least three points are needed to create a Region.");
        return;
    }
    Shape* s;
    std::vector<Line> lines;
    int size = mPoints.size();
    for (int i = 0; i < size; i++) {
        lines.push_back(Line(mPoints.at(i), mPoints.at((i + 1) % size)));
    }
    s = new Shape(lines);
    mOpenGLWidget->addClippingPolygon(s);

    mListWidget3->clear();
    mPoints.clear();
}
void Visualizer_1::addLine()
{
    if (mPoints.size() < 2) {
        // At least two points are needed to create a line
        QMessageBox::warning(this, "Error", "At least two points are needed to create a line.");
        return;
    }
    int size = mPoints.size();
    float x = mPoints[0].x();
    float y = mPoints[0].y();
    float x1 = mPoints[1].x();
    float y1 = mPoints[1].y();

    Point p1(x, y);
    Point p2(x1, y1);
    Line line(p1, p2);
    mOpenGLWidget->addLines(line);
    mListWidget3->clear();
    mPoints.clear();
}

void Visualizer_1::addPolygon()
{
    if (mPoints.size() < 3) {
        // At least three points are needed to create a polygon
        QMessageBox::warning(this, "Error", "At least three points are needed to create a polygon.");
        return;
    }

    std::vector<Line> lines;
    int size = mPoints.size();
    for (int i = 0; i < size; i++) {
        lines.push_back(Line(mPoints.at(i), mPoints.at((i + 1) % size)));
    }

    Shape* polygon = new Shape(lines);
    mOpenGLWidget->addPolygons(polygon);

    mListWidget3->clear();
    mPoints.clear();
}

void Visualizer_1::clipPolygon()
{
    mOpenGLWidget->clipPolygons();
}

void Visualizer_1::addGrid()
{
    bool ok;
    // Get a multi-line text input from the user
    QString inputText = QInputDialog::getMultiLineText(this, "User Input", "Enter gridSize (integer):", "", &ok);
    if (ok) {
        // Parse the input string into 4 float values        
        bool conversionOk;
        gridSize = inputText.toInt(&conversionOk);
        if (!conversionOk)
            return;
    }

    mOpenGLWidget->drawGrid(gridSize);
    mListWidget3->clear();
    mPoints.clear();
}
void Visualizer_1::beizerCurve()
{
    mOpenGLWidget->addBezierCurve(mPoints);
    mListWidget3->clear();
    mPoints.clear();
}
void Visualizer_1::hermiteCurve()
{

    if (mPoints.size() != 4) {
        // At least three points are needed to create a polygon
        QMessageBox::warning(this, "Error", "Four points are needed to create a Hermite.");
        return;
    }
    mOpenGLWidget->addHermiteCurve(mPoints);

    mListWidget3->clear();
    mPoints.clear();

}
void Visualizer_1::addBSpline()
{
    // Add a Bezier curve to the OpenGL window
    if (mPoints.size() != 4) {
        QMessageBox::warning(this, "Error", "Four points are needed to create a BSpline curve.");
        return;
    }

    // Add Bezier curve to the OpenGL window
    mOpenGLWidget->addBSplineCurve(mPoints);
    mListWidget3->clear();
    mPoints.clear();

}
void Visualizer_1::addColor()
{
    mOpenGLWidget->changeColor();
}
void Visualizer_1::addTranslateCoordinates()
{
    float x = mPoints[0].x();
    float y = mPoints[0].y();

    mOpenGLWidget->updateFigurePosition(x, y);
}
void Visualizer_1::clearPoints()
{
    // Clear the vector storing points
    mPoints.clear();

    // Clear the QListWidget displaying points
    mListWidget3->clear();
}
void Visualizer_1::addRotate()
{
    bool ok;
    // Get a multi-line text input from the user
    QString inputText = QInputDialog::getMultiLineText(this, "User Input", "Enter roatating angle:", "", &ok);
    if (ok) {
        // Parse the input string into 4 float values        
        bool conversionOk;
        angle = inputText.toFloat(&conversionOk);
        if (!conversionOk)
            return;
    }

    mOpenGLWidget->updateRotation(angle);
    mListWidget3->clear();
    mPoints.clear();
}