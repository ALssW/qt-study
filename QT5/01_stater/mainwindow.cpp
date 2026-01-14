#include "mainwindow.h"
#include "mybutton.h"
#include "ui_mainwindow.h"

#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    MyButton* btn1 = new MyButton("关闭窗口", this);
    btn1->show();

    connect(btn1, &MyButton::clicked, this, &MainWindow::close);
}

MainWindow::~MainWindow()
{    
    delete ui;
    qDebug("MainWindow delete");
}

