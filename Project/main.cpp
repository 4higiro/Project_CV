#include "MainWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget widget;
    widget.show();
    return a.exec();
}
