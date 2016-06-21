#ifndef TASKCOLLECTION_H
#define TASKCOLLECTION_H
#include "task.h"


class TaskCollection
{
public:
    TaskCollection();
    task getTaskAt(int position);
    void removeTaskAt(int position);
    void addTask(task addition);
private:
    //Arreglo de tasks, maximos de 15.
    task tasklist[15];
};

#endif // TASKCOLLECTION_H
