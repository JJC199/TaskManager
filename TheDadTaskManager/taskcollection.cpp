#include "taskcollection.h"

taskcollection::taskcollection()
{
    for(int x = 0; x < 15; x++){
        tasklist[x] = Task();
        tasklist[x].setInactive();
    }
}

Task taskcollection::getTaskAt(int position){
    if(position >= 0 && position < 15)
        for(int x = 0; x < 15; x++)
            if((x) == position)
                return tasklist[x];
    return tasklist[0];
}

void taskcollection::removeTaskAt(int position){
    if(position > 0 && position <= 15)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position){
                tasklist[x].setInactive();
            }
}

void taskcollection::addTask(Task addition){
    for(int x = 0; x < 15; x++)
        if(!tasklist[x].ifActive())
            tasklist[x] = addition;
}
