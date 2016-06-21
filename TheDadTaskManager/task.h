#ifndef TASK_H
#define TASK_H
#include <QString>


class Task
{
public:
    Task();
    QString getName();
    QString getDesc();
    void setName();
    void setDesc();
    int getType();
    boolean ifActive();
    void setInactive();
private:
    QString name;
    QString description;
    //Tipo de task, referencia para adicion de colores.
    int type = 0;
    boolean active = true;
};

#endif // TASK_H
