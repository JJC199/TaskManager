#include "task.h"

Task::Task()
{
    name = "Sample";
    description = "Sample";
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

bool Task::ifActive(){
    return active;
}

void Task::setInactive(){
    active = false;
}
