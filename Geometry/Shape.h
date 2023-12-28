#pragma once
#define GEOMETRY_DLL
#include <stdio.h>
#include <vector>
#include "Line.h"
#include "Point.h"


class GEOMETRY_API Shape
{
public:
    Shape();
    Shape(const std::vector<Line>& polyLines);
    //Shape(const std::vector<Point>& polyLines);
    ~Shape();

    std::vector<Line>& getShape();
    //std::vector<Point>& getShapePoints();

    size_t getSize() const;
    void setShape(std::vector<Line> vl);
    void setShape(std::vector<Point> vp);

public:
    std::vector<Line> mPolyLines;
    std::vector<Point> mPoints;
};