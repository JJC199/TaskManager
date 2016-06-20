#include "tasksmain.h"
#include "ui_tasksmain.h"

TasksMain::TasksMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TasksMain)
{
    ui->setupUi(this);
}

TasksMain::~TasksMain()
{
    delete ui;
}
