#ifndef HOME_TASK_H
#define HOME_TASK_H
#include <QString>
#include "task.h"

class home_task:public Task
{
public:
    home_task(QString nombre, QString descripcion);
private:
    //Tipo de task, referencia para adicion de colores.
    QString type = "Home";
};

#endif // HOME_TASK_H
