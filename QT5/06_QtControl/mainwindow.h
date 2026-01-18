//
// Created by ALsW on 2026/1/18
//

#ifndef QT_STUDY_MAINWINDOW_H
#define QT_STUDY_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE

namespace Ui
{
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow* ui;
};


#endif //QT_STUDY_MAINWINDOW_H