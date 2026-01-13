#include "mywidget.h"
#include "student.h"
#include "teacher.h"
#include "ui_mywidget.h"

#include <QDebug>
#include <QPushButton>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    this->t = new Teacher(this);

    this->stu = new Student(this);

    // 绑定信号与槽
    // connect(t, &Teacher::finshCourse, stu, &Student::go);

    void(Teacher::*tSignal1)(void) = &Teacher::finshCourse;
    void(Student::*sSlot1)(void) = &Student::go;
    connect(t, tSignal1, stu, sSlot1);
    // 发送信号 触发 go()
     emit t->finshCourse();

    // 绑定重载函数
    // 使用函数指针指向重载函数
    void(Teacher::*tSignal2)(QString) = &Teacher::finshCourse;
    void(Student::*sSlot2)(QString) = &Student::go;
    connect(t, tSignal2, stu, sSlot2);
    // 手动发送信号
    emit t->finshCourse("宿舍");

    // 将按钮信号与老师信号绑定
    QPushButton* btn1 = new QPushButton(this);
    connect(btn1, &QPushButton::clicked, t, tSignal1);

    // 将按钮信号与槽绑定
    QPushButton* btn2 = new QPushButton(this);
    btn2->move(btn1->geometry().width(), 0);
    connect(btn2, &QPushButton::clicked, stu, sSlot1);

    qDebug() << "window size w:" << this->width() << " h: " << this->height();
    qDebug() << "btn1 size w:" << btn1->geometry() << " h: " << btn1->height();
    qDebug() << "btn1 x:" << btn1->x() << " y: " << btn1->y();
    qDebug() << "btn2 size w:" << btn2->geometry() << " h: " << btn2->height();
    qDebug() << "btn2 x:" << btn2->x() << " y: " << btn2->y();
}

MyWidget::~MyWidget()
{
    delete ui;
}


