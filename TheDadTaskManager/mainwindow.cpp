#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_3_clicked()
{
    //ui->textBrowser->setText();
}
