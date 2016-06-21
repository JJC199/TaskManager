#ifndef WORK_TASK_H
#define WORK_TASK_H

#include "task.h"

class work_task : public Task
{
public:
    work_task(QString nombre, QString descripcion);
    getType();
private:
    //Tipo de task, referencia para adicion de colores.
    int type = 2;
};

#endif // WORK_TASK_H
