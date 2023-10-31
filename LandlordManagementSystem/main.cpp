#include "LandlordManagementSystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LandlordManagementSystem w;
    w.show();
    return a.exec();
}
