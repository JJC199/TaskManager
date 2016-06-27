#ifndef TASK_H
#define TASK_H
#include <QString>


class Task
{
public:
    Task();
    QString getName();
    QString getDesc();
    void setName(QString nombre);
    void setDesc(QString descripcion);
    QString getType();
    bool ifActive();
    void setInactive();
private:
    QString name;
    QString description;
    //Tipo de task, referencia para adicion de colores.
    QString type = "Empty task...";
    bool active = true;
};

#endif // TASK_H
