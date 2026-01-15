//
// Created by ALsW on 2026/1/15
//


#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow main;
    main.show();
    return QApplication::exec();
}
