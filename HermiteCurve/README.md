# Hermite Curve Implementation
The Hermite Curve implementation is a mathematical method used for interpolating points with given tangents. This curve is useful in computer graphics and animation for smooth, controlled paths between points.

## Overview
This project implements the Hermite Curve interpolation algorithm, allowing users to generate a smooth curve that passes through specified points while following prescribed tangents at those points.

## Features
Hermite Curve Class
Provides methods to calculate Hermite interpolation.
Enables the creation of a smooth curve that passes through control points with specified tangents.
Usage
Include the HermiteCurve.h header file in your project.
Ensure the HermiteCurve library or source files are available.
Create an instance of the HermiteCurve class.
Use the evaluateHermite method to compute the interpolated point on the curve at a given parameter value.
Hermite Curve with input points (0,0) (2,4) (5,3) (7,0) (same as BSpline inputs)
![Hermite curve(00,24,53,70)](https://github.com/mvanadana/Visualizer_1/assets/149364066/7d81d494-25dd-45d5-9eeb-2c2da08d442d)
