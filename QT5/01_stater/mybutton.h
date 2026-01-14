#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

namespace Ui {
class MyButton;
}

class MyButton : public QPushButton
{
    Q_OBJECT

public:
    explicit MyButton(QWidget *parent = nullptr);
    explicit MyButton(const QString &text, QWidget *parent = nullptr);

    ~MyButton();

};

#endif // MYBUTTON_H
