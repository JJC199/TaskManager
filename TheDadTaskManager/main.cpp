#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    home_task m("HW", "LAUNDRY");
    school_task c("QUEMISTRY","INVESTIGATUION");
    QApplication a(argc, argv);
    MainWindow w;
    newtask k;
    k.newtask(m);
    k.newtask(c);
    w.show();

    return a.exec();
}
