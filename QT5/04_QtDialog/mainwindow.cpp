//
// Created by ALsW on 2026/1/14
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "mainwindow.h"
#include <QColorDialog>
#include <QDebug>
#include <QDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QPushButton>
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // QPushButton* btn = new QPushButton("click", this);
    // QPushButton* btn2 = new QPushButton("click", this);
    // btn2->move(btn->x() + btn->width(), btn->y());
    //
    // QDialog* log1 = new QDialog(this);
    //
    // // 模态 - 阻塞
    // connect(btn, &QPushButton::clicked, log1, &QDialog::exec);
    // // 非模态 - 不阻塞
    // connect(btn2, &QPushButton::clicked, log1, &QDialog::show);

    // // 错误
    // QMessageBox::critical(this, "错误", "错误");
    // // 信息
    // QMessageBox::information(this, "信息", "消息");
    // // 提问 返回点击的按钮
    // QMessageBox::StandardButton clickBtn = QMessageBox::question(this, "你好", "选择",
    //                                                              QMessageBox::StandardButton::Save |
    //                                                              QMessageBox::StandardButton::Ok | QMessageBox::Cancel);
    // if (clickBtn == QMessageBox::Save)
    // {
    //     qDebug("点击 save");
    // }
    // else if (clickBtn == QMessageBox::Cancel)
    // {
    //     qDebug("点击 cancel");
    // }
    // else if (clickBtn == QMessageBox::Ok)
    // {
    //     qDebug("点击 ok");
    // }

    // 警告
    // QMessageBox::warning(this, "警告", "warn");

    // 颜色对话框
    // QColor color = QColorDialog::getColor();
    // qDebug() << "color " << color;
    QPushButton* btn = new QPushButton(this);

    // 文件对话框
    QString filename = QFileDialog::getOpenFileName(this, "选择文件", "D:/", "(*.png )");
    qDebug() << "file name " << filename;
    btn->setIcon(QIcon(filename));
    btn->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
