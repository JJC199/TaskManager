#include "home_task.h"

home_task::home_task(QString nombre, QString descripcion)
{
    setName(nombre);
    setDesc(descripcion);
}

int home_task::getType(){
    return type;
}
