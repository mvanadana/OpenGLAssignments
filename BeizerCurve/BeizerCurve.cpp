// BeizerCurve.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "BeizerCurve.h"


// This is an example of an exported variable
BEIZERCURVE_API int nBeizerCurve=0;

// This is an example of an exported function.
BEIZERCURVE_API int fnBeizerCurve(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
BeizerCurve::BeizerCurve()
{
    return;
}

BeizerCurve::BeizerCurve(std::vector<Point> points) : mControlPoints(points)
{
}
BeizerCurve::~BeizerCurve()
{
}

std::vector<Point> BeizerCurve::calculateBezier()
{
    std::vector<Point> result;
    for (double t = 0; t <= 1; t += 0.01) {
        Point r = evaluateBezier(t);
        result.push_back(r);
    }
    return result;
}

Point BeizerCurve::evaluateBezier(double t)
{
    double u = 1.0 - t;
    double tt = t * t;
    double uu = u * u;
    double uuu = uu * u;
    double ttt = tt * t;

    double x = uuu * mControlPoints[0].x() + 3 * uu * t * mControlPoints[1].x() + 3 * u * tt * mControlPoints[2].x() + ttt * mControlPoints[3].x();
    double y = uuu * mControlPoints[0].y() + 3 * uu * t * mControlPoints[1].y() + 3 * u * tt * mControlPoints[2].y() + ttt * mControlPoints[3].y();
    Point p(x, y);

    return p;
}

