#ifndef TASKSMAIN_H
#define TASKSMAIN_H

#include <QMainWindow>

namespace Ui {
class TasksMain;
}

class TasksMain : public QMainWindow
{
    Q_OBJECT;

public:
    explicit TasksMain(QWidget *parent = 0);
    ~TasksMain();

private:
    Ui::TasksMain *ui;
};

#endif // TASKSMAIN_H
