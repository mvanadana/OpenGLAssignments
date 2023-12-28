#include "pch.h"
#include "Point.h"

Point::Point(double inX, double inY)
    :mX(0),
    mY(0)
{
    mX = inX;
    mY = inY;
}
Point::Point(double inX, double inY, double inZ):mX(0),mY(0),mZ(0)
{
    mX = inX;
    mY = inY;
    mZ = inZ;
}
Point::Point()
{

}
Point::~Point()
{
}

double Point::x()
{
    return mX;
}

double Point::y()
{
    return mY;
}
double Point::z()
{
    return mZ;
}
void Point::setX(double x) {
    mX = x;
}

void Point::setY(double y) {
    mY = y;
}
void Point::setZ(double z)
{
    mZ = z;
}