#include "task.h"

Task::Task()
{
    //Ya que no usaremos la clase padre para crear, esto se queda vacio. Saludos.
}

QString Task::getName(){
    return name;
}

QString Task::getDesc(){
    return description;
}

void Task::setName(QString nombre){
    name = nombre;
}

void Task::setDesc(QString desc){
    description = desc;
}

boolean Task::ifActive(){
    return active;
}

void Task::setInactive(){
    active = false;
}
