#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "work_task.h"
#include "home_task.h"
#include "school_task.h"
#include "otheractivities_task.h"
#include "newtask_form.h"
#include "ui_newtask_form.h"
#include "task.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::workTask_clicked(){
    newTask_form form;
    form.setModal(true);
    form.exec();

}

