// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the HERMITECURVE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// HERMITECURVE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


// This class is exported from the dll
#include<Point.h>
#include<vector>
#include "pch.h"
class HERMITECURVE_API HermiteCurve {
public:
	HermiteCurve(void);

public:
	HermiteCurve(std::vector<Point> points);
	~HermiteCurve();
	std::vector<Point> calculateHermite();
private:
	Point evaluateHermite(double t);
private:
	std::vector<Point> mControlPoints;
};

extern HERMITECURVE_API int nHermiteCurve;

HERMITECURVE_API int fnHermiteCurve(void);