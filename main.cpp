#include "mainwindow/mainwindow.hpp"
#include <QApplication>
#include <iostream>
#include <vector>


int currency = 1000;


int main(int argc, char *argv[])
{
    using namespace std;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    a.exec();
    return 0;
}