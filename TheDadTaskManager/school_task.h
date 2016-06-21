#ifndef SCHOOL_TASK_H
#define SCHOOL_TASK_H

#include "task.h"

class school_task:public Task
{
public:
    school_task(QString nombre, QString descripcion);
    getType();
private:
    //Tipo de task, referencia para adicion de colores.
    int type = 3;
};

#endif // SCHOOL_TASK_H
