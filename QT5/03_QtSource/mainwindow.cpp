//
// Created by ALsW on 2026/1/13 23:44
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 添加图片
    ui->action1->setIcon(QIcon(":img/res/image.png"));
    ui->pushButton->setIcon(QIcon(":img/res/image.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}