#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);

signals:

public slots:
    // 声明槽函数
    void go();
    // 重载
    void go(QString);
};


#endif // STUDENT_H
