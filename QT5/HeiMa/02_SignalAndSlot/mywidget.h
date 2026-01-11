#ifndef MTWIDGET_H
#define MTWIDGET_H

#include "student.h"
#include "teacher.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MtWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    Ui::MtWidget *ui;

    Teacher* t;
    Student* stu;

    void signalTrigger();

};
#endif // MTWIDGET_H
