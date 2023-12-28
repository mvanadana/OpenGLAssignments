# Geometric Visualizer 
## Overview
This project is a Geometric Visualizer application that utilizes OpenGL for rendering various geometric shapes, transformations, and curve generation. The aim is to provide a comprehensive tool for visualizing and interacting with different geometric entities.

## Implementation Overview
The project is structured as follows:

### File Structure
### OpenglWindow.cpp: 
This file contains the implementation of the main OpenGL window where rendering, geometric operations, and curve generation are handled.
### Visualizer_1.cpp: 
Implements the user interface using Qt for buttons, inputs, and interactions.
Other .dll files and classes (SutherlandHodgman, HermiteCurve, BezierCurve, BSplineCurve, SimpleDDA, Grid) support various functionalities within the main application.
## Key Functionalities
### Geometric Operations: 
Translation and rotation methods are implemented to manipulate shapes within the OpenGL window.
### Curve Generation:
Hermite, Bezier, and B-Spline curves can be generated and visualized.
Polygon Clipping: Utilizes the Sutherland-Hodgman algorithm for clipping polygons.
Grid Visualization: Draws grids and shapes within the grid for better visualization.
## Color Palette and Shaders
The Geometric Visualizer implements a color palette and shaders to enhance the visualization and appearance of geometric entities within the OpenGL window.

## Color Palette
Color Selection: The application utilizes a Qt color palette, allowing users to select and apply colors to different geometric shapes interactively.
## Implementation: 
The updateColor() method triggers a color picker dialog, enabling users to choose a color that is then applied to the shapes using shaders.
## Shaders
Shader Files: The project utilizes two GLSL shader files: VertexShaders.glsl and fragmentShaders.glsl.
## Functionality:
These shaders handle the rendering pipeline, enabling advanced visual effects and coloring of geometric shapes.
Dynamic Shader Reloading: The shaderWatcher() function monitors changes in the shader files and dynamically reloads them, ensuring real-time updates and alterations in the rendering pipeline.
Shader Implementation
### Vertex Shader (VertexShaders.glsl):
Contains code defining the behavior and properties of vertices in the rendering process.
Responsible for transforming 3D coordinates and passing them to the fragment shader.
### Fragment Shader (fragmentShaders.glsl):
Determines the final color output of each pixel on the screen.
Handles coloring, shading, and any additional visual effects applied to the shapes.
Usage of Colors and Shaders
The color palette and shaders are integral parts of the visualization process, allowing users to:

Select desired colors for geometric entities through an intuitive interface.
Experience visually appealing rendering effects and coloring attributed to the shaders applied to the shapes.

## Dependencies
The project relies on:
OpenGL: Used for rendering and visualizing geometric entities.
Qt: Utilized for creating the user interface, buttons, and interactions.
