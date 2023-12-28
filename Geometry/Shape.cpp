#include "pch.h"
#include "Shape.h"

Shape::Shape(const std::vector<Line>& polyLines)
    : mPolyLines(polyLines)  // Use member initializer list
{
}
//Shape::Shape(const std::vector<Point>& points)
//    : mPoints(points)  // Use member initializer list
//{
//}
Shape::Shape()
{

}

Shape::~Shape()
{
}

std::vector<Line>& Shape::getShape()
{
    return mPolyLines;
}
//std::vector<Point>& Shape::getShapePoints()
//{
//    return mPoints;
//}
void Shape::setShape(std::vector<Line> vl)
{
    mPolyLines = vl;
}
void Shape::setShape(std::vector<Point> vp)
{
    mPoints = vp;
}

size_t Shape::getSize() const
{
    return mPolyLines.size();
}