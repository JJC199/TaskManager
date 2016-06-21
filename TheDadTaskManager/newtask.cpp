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
    QString title = ui->lineEdit->text();

    if(ui->comboBox->currentText() == Work){
        TC->addTask();
    }
}
