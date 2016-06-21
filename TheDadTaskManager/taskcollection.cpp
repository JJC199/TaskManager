#include "taskcollection.h"

TaskCollection::TaskCollection()
{
    //Que hay de nuevo viejo? Aqui no de se declara nada.
}

Task TaskCollection::getTaskAt(int position){
    if(position > 0 && position <= 15)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position)
                return tasklist[x];
    return tasklist[0];
}

void TaskCollection::removeTaskAt(int position){
    if(position > 0 && position <= 15)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position){
                tasklist[x].setInactive();
            }
}

void TaskCollection::addTask(Task addition){
    for(int x = 0; x < 15; x++)
        if(!tasklist[x].ifActive())
            tasklist[x] = addition;
}
