#include "taskcollection.h"

TaskCollection::TaskCollection()
{
    //Que hay de nuevo viejo? Aqui no de se declara nada.
}

task TaskCollection::getTaskAt(int position){
    if(position > 0 && position <= 15)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position)
                return tasklist[x];
    return tasklist[-1]
}

void TaskCollection::removeTaskAt(int position){
    if(position > 0 && position <= 15)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position){
                tasklist[x]->setInactive();
            }
}

void TaskCollection::addTask(task *addition){
    for(int x = 0; x < 15; x++)
        if(!tasklist[x]->ifActive())
            tasklist[x] = addition;
}
