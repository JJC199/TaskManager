#include "otheractivities_task.h"

otheractivities_task::otheractivities_task(QString nombre, QString descripcion)
{
    setName(nombre);
    setDesc(descripcion);
}

int otheractivities_task::getType(){
    return type;
}
