#include "widgetusb2020.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WidgetUSB2020 w;
    w.show();
    return a.exec();
}
