#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "work_task.h"
#include "home_task.h"
#include "school_task.h"
#include "otheractivities_task.h"
#include "taskcollection.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void refresh();
    ~MainWindow();

private slots:
    void on_newTask_clicked();

    void on_pushButton_3_clicked();

    void on_create_clicked();

    void on_refresh_clicked();

    void on_next_clicked();

    void on_prev_clicked();

private:
    int taskselector;
    taskcollection *TC = new taskcollection();
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
