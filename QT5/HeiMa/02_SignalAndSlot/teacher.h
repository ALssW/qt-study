#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    // 声明自定义信号
    void finshCourse();
    // 重载
    void finshCourse(QString str);
};

#endif // TEACHER_H
