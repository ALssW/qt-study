#ifndef MYWIDGET_H
#define MYWIDGET_H

#include "student.h"
#include "teacher.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget() override;

private:
    Ui::MyWidget *ui;

    Teacher* t;
    Student* stu;

    void signalTrigger();

};
#endif // MYWIDGET_H
