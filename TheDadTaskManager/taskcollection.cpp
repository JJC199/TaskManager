#include "taskcollection.h"

taskcollection::taskcollection()
{
    //Fill the array with samples of tasks and sets them inactive.
    //By setting them inactive, they can be compared to add a new one.
    for(int x = 0; x < 15; x++){
        tasklist[x] = Task();
        tasklist[x].setInactive();
    }
}

//Returns task at the chosen location in the array.
Task taskcollection::getTaskAt(int position){
    if(position >= 0 && position < 15)
        for(int x = 0; x < 15; x++)
            if((x) == position)
                return tasklist[x];
    return tasklist[14];
}

//Removes task at the chosen location.
void taskcollection::removeTaskAt(int position){
    if(position >= 0 && position < 14)
        for(int x = 0; x < 15; x++)
            if((x + 1) == position){
                tasklist[x].setInactive();
                break;
            }
}

//Adds a new task in the first available location in the array.
void taskcollection::addTask(Task addition){
    for(int x = 0; x < 15; x++)
        //If the task in that location is not active (deleted) it is replaced by the new task.
        if(!tasklist[x].ifActive()){
            tasklist[x] = addition;
            break;
        }
}
