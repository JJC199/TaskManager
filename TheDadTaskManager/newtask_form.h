#ifndef NEWTASK_FORM_H
#define NEWTASK_FORM_H

#include <QWidget>

namespace Ui {
class newTask_form;
}

class newTask_form : public QWidget
{
    Q_OBJECT

public:
    explicit newTask_form(QWidget *parent = 0);
    ~newTask_form();

private:
    Ui::newTask_form *ui;
};

#endif // NEWTASK_FORM_H
