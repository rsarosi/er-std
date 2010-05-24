#include <QtGui/QApplication>
#include "controllerwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ControllerWidget w;
    w.show();
    return a.exec();
}
