#include "work.h"
#include "ui_work.h"

work::work(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::work)
{
    ui->setupUi(this);
}

work::~work()
{
    delete ui;
}
