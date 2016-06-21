#ifndef HOME_TASK_H
#define HOME_TASK_H
#include <QString>
#include "task.h"

class home_task:public Task
{
public:
    home_task(QString nombre, QString descripcion);
    getType();
private:
    //Tipo de task, referencia para adicion de colores.
    int type = 1;
};

#endif // HOME_TASK_H
