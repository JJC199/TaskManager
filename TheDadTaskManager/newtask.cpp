#include "newtask.h"
#include "ui_newtask.h"

newtask::newtask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newtask)
{
    ui->setupUi(this);
}

newtask::~newtask()
{
    delete ui;
}

void newtask::on_pushButton_clicked()
{
    //Guarda el texto de el titulo y la descripcion en variables.
    QString title = ui->lineEdit->text();
    QString desc = ui->textEdit->toPlainText();

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
