// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SUTHERLANDHODGEMAN_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SUTHERLANDHODGEMAN_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


// This class is exported from the dll
#pragma once
#include "Line.h"
#include "shape.h"
#include "Point.h"

#include "pch.h"
class SUTHERLANDHODGEMAN_API SutherlandHodgeman {
public:
	SutherlandHodgeman(void);

public:
	SutherlandHodgeman(Shape region, Shape polygon);
	~SutherlandHodgeman();
	Shape getClippedPolygon();

private:
	void clipAlongLine(Line l);
	double xIntersect(Line l1, Line l2);
	double yIntersect(Line l1, Line l2);

private:
	Shape mPolygon;
	Shape mRegion;
};

extern SUTHERLANDHODGEMAN_API int nSutherlandHodgeman;

SUTHERLANDHODGEMAN_API int fnSutherlandHodgeman(void);


