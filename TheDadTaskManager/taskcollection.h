#ifndef TASKCOLLECTION_H
#define TASKCOLLECTION_H
#include "task.h"


class TaskCollection
{
public:
    TaskCollection();
    Task getTaskAt(int position);
    void removeTaskAt(int position);
    void addTask(Task addition);
private:
    //Arreglo de tasks, maximos de 15.
    Task tasklist[15];
};

#endif // TASKCOLLECTION_H
