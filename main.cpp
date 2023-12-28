#include "stdafx.h"
#include "Visualizer_1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Visualizer_1 w;
    w.show();
    return a.exec();
}
