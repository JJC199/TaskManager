#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    taskselector = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh(){
    ui->textleft1->setText(TC->getTaskAt(taskselector).getName());
    ui->textleft2->setText(TC->getTaskAt(taskselector).getDesc());
    if(TC->getTaskAt(taskselector).getType() == 1){
        ui->type->setText("Home");
    }else if(TC->getTaskAt(taskselector).getType() == 2){
        ui->type->setText("Work");
    }else if(TC->getTaskAt(taskselector).getType() == 3){
        ui->type->setText("School");
    }else if(TC->getTaskAt(taskselector).getType() == 4){
        ui->type->setText("Other Activities");
    }else if(TC->getTaskAt(taskselector).getType() == 0){
        ui->type->setText("Empty task...");
    }
}

void MainWindow::on_newTask_clicked()
{
    //Hola
}

void MainWindow::on_pushButton_3_clicked()
{
    //ui->textBrowser->setText();
}

void MainWindow::on_create_clicked()
{
    //Guarda el texto de el titulo y la descripcion en variables.
    QString title = ui->textright1->text();
    QString desc = ui->textright2->toPlainText();

    //Revisa cual tarea esta seleccionada y llama a la funcion basado en el tipo.
    if(ui->comboBox->currentText() == "Work"){
        TC->addTask(work_task(title, "" + desc));
    }else if(ui->comboBox->currentText() == "Home"){
        TC->addTask(home_task(title, "" + desc));
    }else if(ui->comboBox->currentText() == "School"){
        TC->addTask(school_task(title, "" + desc));
    }else if(ui->comboBox->currentText() == "Other Activities"){
        TC->addTask(otheractivities_task(title, "" + desc));
    }
}

void MainWindow::on_refresh_clicked()
{
    refresh();
}

void MainWindow::on_next_clicked()
{
    if(taskselector < 14)
        taskselector++;
    QString s = QString::number(taskselector + 1);
    ui->counter->setText(s);
    refresh();
}

void MainWindow::on_prev_clicked()
{
    if(taskselector > 0)
        taskselector--;
    QString s = QString::number(taskselector + 1);
    ui->counter->setText(s);
    refresh();
}
