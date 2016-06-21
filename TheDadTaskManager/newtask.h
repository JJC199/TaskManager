#ifndef NEWTASK_H
#define NEWTASK_H

#include <QDialog>

#include "taskcollection.h"

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
    Ui::newtask *ui;
};

#endif // NEWTASK_H
