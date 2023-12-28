#pragma once
#include "stdafx.h"
#include <vector>


class  Grid {
public:
    Grid(void);
    Grid(QVector<GLfloat>& vertices,QVector<GLfloat>& colors, int gridSize);
    ~Grid();
private:
    void drawGrid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors, int gridSize);

};

