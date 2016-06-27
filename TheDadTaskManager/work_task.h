#ifndef WORK_TASK_H
#define WORK_TASK_H
#include <QString>
#include "task.h"

class work_task : public Task
{
public:
    work_task(QString nombre, QString descripcion);
private:
    //Tipo de task, referencia para adicion de colores.
    QString type = "Work";
};

#endif // WORK_TASK_H
