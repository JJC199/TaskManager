#include "newtask_form.h"
#include "ui_newtask_form.h"

newTask_form::newTask_form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::newTask_form)
{
    ui->setupUi(this);
}

newTask_form::~newTask_form()
{
    delete ui;
}
