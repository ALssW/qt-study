#include "mybutton.h"
#include "mybutton2.h"

MyButton::MyButton(QWidget *parent) :
    QPushButton(parent)
{

}

MyButton:: MyButton(const QString &text, QWidget *parent):
    QPushButton(text, parent)
{

}

MyButton::~MyButton()
{
    qDebug("MyButton delete");
}
