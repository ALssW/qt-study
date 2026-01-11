#ifndef MYBUTTON2_H
#define MYBUTTON2_H

#include <QPushButton>

namespace Ui {
class MyButton2;
}

class MyButton2 : public QPushButton
{
    Q_OBJECT

public:
    explicit MyButton2(QWidget *parent = nullptr);
    ~MyButton2();

};

#endif // MYBUTTON2_H
