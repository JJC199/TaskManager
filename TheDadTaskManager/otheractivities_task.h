#ifndef OTHERACTIVITIES_TASK_H
#define OTHERACTIVITIES_TASK_H
#include <QString>
#include "task.h"


class otheractivities_task:public Task
{
public:
    otheractivities_task(QString nombre, QString descripcion);
private:
    //Tipo de task, referencia para adicion de colores.
    QString type = "Other Activies";
};

#endif // OTHERACTIVITIES_TASK_H
