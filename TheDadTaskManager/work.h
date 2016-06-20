#ifndef WORK_H
#define WORK_H

#include <QDialog>
#include <task.h>

namespace Ui {
class work;
}

class work :public QDialog
{
    Q_OBJECT

public:
    explicit work(QWidget *parent = 0);
    ~work();

private:
    Ui::work *ui;
};

#endif // WORK_H
