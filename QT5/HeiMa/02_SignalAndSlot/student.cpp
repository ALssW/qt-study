#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::go()
{
    qDebug("吃饭!");
}

void Student::go(QString str)
{
    qDebug() << "去 " << str << " !";
}
