#ifndef SCHOOL_TASK_H
#define SCHOOL_TASK_H
#include <QString>
#include "task.h"

class school_task:public Task
{
public:
    school_task(QString nombre, QString descripcion);
private:
    //Tipo de task, referencia para adicion de colores.
    QString type = "School";
};

#endif // SCHOOL_TASK_H
