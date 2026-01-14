#include "mybutton2.h"

MyButton2::MyButton2(QWidget *parent) :
    QPushButton(parent)
{

}

MyButton2::~MyButton2()
{
    qDebug("MyButton2 delete");
}
