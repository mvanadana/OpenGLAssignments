// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BSPLINECURVE_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BSPLINECURVE_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.


// This class is exported from the dll
#include <vector>
#include <utility>
#include "Point.h"
#include "pch.h"
class BSPLINECURVE_API BSplineCurve {
public:
	BSplineCurve(void);
    BSplineCurve(int degree);
    std::vector<Point> evaluate( std::vector<Point>& control_points, float t);

private:
    int degree_;
    std::vector<float> generateUniformKnots(int num_control_points);
    float bSplineBasis(int i, int k, float t, const std::vector<float>& knots);
   
};

extern BSPLINECURVE_API int nBSplineCurve;

BSPLINECURVE_API int fnBSplineCurve(void);
