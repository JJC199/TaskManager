#ifndef NEWTASK_H
#define NEWTASK_H

#include <QDialog>
#include "taskcollection.h"
#include "task.h"
#include "work_task.h"
#include "home_task.h"
#include "school_task.h"
#include "otheractivities_task.h"

namespace Ui {
class newtask;
}

class newtask : public QDialog
{
    Q_OBJECT

public:
    explicit newtask(QWidget *parent = 0);
    ~newtask();

private slots:
    void on_pushButton_clicked();

private:
    taskcollection *TC = new taskcollection();
    Ui::newtask *ui;
};

#endif // NEWTASK_H
