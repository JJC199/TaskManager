/********************************************************************************
** Form generated from reading UI file 'newtask_form.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTASK_FORM_H
#define UI_NEWTASK_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newTask_form
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *task_title;
    QTextBrowser *task_description;
    QLabel *label_3;
    QComboBox *task_type;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QWidget *newTask_form)
    {
        if (newTask_form->objectName().isEmpty())
            newTask_form->setObjectName(QStringLiteral("newTask_form"));
        newTask_form->resize(400, 353);
        buttonBox = new QDialogButtonBox(newTask_form);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(40, 320, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(newTask_form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        task_title = new QTextEdit(newTask_form);
        task_title->setObjectName(QStringLiteral("task_title"));
        task_title->setGeometry(QRect(10, 80, 311, 21));
        task_description = new QTextBrowser(newTask_form);
        task_description->setObjectName(QStringLiteral("task_description"));
        task_description->setGeometry(QRect(10, 120, 311, 192));
        label_3 = new QLabel(newTask_form);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 91, 16));
        task_type = new QComboBox(newTask_form);
        task_type->setObjectName(QStringLiteral("task_type"));
        task_type->setGeometry(QRect(150, 40, 191, 22));
        label_2 = new QLabel(newTask_form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 51, 16));
        label_4 = new QLabel(newTask_form);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 20, 51, 16));

        retranslateUi(newTask_form);

        QMetaObject::connectSlotsByName(newTask_form);
    } // setupUi

    void retranslateUi(QWidget *newTask_form)
    {
        newTask_form->setWindowTitle(QApplication::translate("newTask_form", "Form", 0));
        label->setText(QApplication::translate("newTask_form", "New Task", 0));
        label_3->setText(QApplication::translate("newTask_form", "Task Description", 0));
        task_type->clear();
        task_type->insertItems(0, QStringList()
         << QApplication::translate("newTask_form", "Work", 0)
         << QApplication::translate("newTask_form", "Home", 0)
         << QApplication::translate("newTask_form", "School", 0)
         << QApplication::translate("newTask_form", "Other Activities", 0)
        );
        label_2->setText(QApplication::translate("newTask_form", "Task Title", 0));
        label_4->setText(QApplication::translate("newTask_form", "Task Type", 0));
    } // retranslateUi

};

namespace Ui {
    class newTask_form: public Ui_newTask_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASK_FORM_H
