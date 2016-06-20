#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "ui_newtask_form.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void workTask_clicked();
    void schoolTask_clicked();
    void homeTask_clicked();
    void oaTask_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
