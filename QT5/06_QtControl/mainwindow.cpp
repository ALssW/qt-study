//
// Created by ALsW on 2026/1/18
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget* parent) :
    QWidget(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QWidgetList* widgetList = new QWidgetList();

}

MainWindow::~MainWindow()
{
    delete ui;
}