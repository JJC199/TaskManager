#include "work_task.h"

work_task::work_task(QString nombre, QString descripcion)
{
    setName(nombre);
    setDesc(descripcion);
}

int work_task::getType(){
    return type;
}
