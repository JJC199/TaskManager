#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newtask.h"

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

void MainWindow::on_newTask_clicked()
{
    newtask task;
    task.setModal(true);
    task.exec();
}
