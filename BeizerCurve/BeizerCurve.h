// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BEIZERCURVE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BEIZERCURVE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


// This class is exported from the dll
#pragma once
#include<Point.h>
#include<vector>
#include "pch.h"
class BEIZERCURVE_API BeizerCurve {
public:
	BeizerCurve(void);

public:
	BeizerCurve(std::vector<Point> points);
	~BeizerCurve();
	std::vector<Point> calculateBezier();
private:
	Point evaluateBezier(double t);
private:
	std::vector<Point> mControlPoints;
};

extern BEIZERCURVE_API int nBeizerCurve;

BEIZERCURVE_API int fnBeizerCurve(void);
