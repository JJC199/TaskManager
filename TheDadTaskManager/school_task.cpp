#include "school_task.h"

school_task::school_task(QString nombre, QString descripcion)
{
    setName(nombre);
    setDesc(descripcion);
}

int school_task::getType(){
    return type;
}
