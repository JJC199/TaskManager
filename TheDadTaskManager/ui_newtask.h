/********************************************************************************
** Form generated from reading UI file 'newtask.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTASK_H
#define UI_NEWTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_newtask
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;

    void setupUi(QDialog *newtask)
    {
        if (newtask->objectName().isEmpty())
            newtask->setObjectName(QStringLiteral("newtask"));
        newtask->resize(421, 317);
        label = new QLabel(newtask);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 91, 21));
        label_2 = new QLabel(newtask);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 81, 31));
        lineEdit = new QLineEdit(newtask);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 191, 21));
        pushButton = new QPushButton(newtask);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 220, 81, 31));
        pushButton_2 = new QPushButton(newtask);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 260, 81, 31));
        comboBox = new QComboBox(newtask);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(230, 30, 151, 21));
        label_3 = new QLabel(newtask);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 10, 81, 16));
        textEdit = new QTextEdit(newtask);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 90, 191, 211));
        label_4 = new QLabel(newtask);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 130, 111, 41));

        retranslateUi(newtask);

        QMetaObject::connectSlotsByName(newtask);
    } // setupUi

    void retranslateUi(QDialog *newtask)
    {
        newtask->setWindowTitle(QApplication::translate("newtask", "Dialog", 0));
        label->setText(QApplication::translate("newtask", "Task Title", 0));
        label_2->setText(QApplication::translate("newtask", "Task Description", 0));
        pushButton->setText(QApplication::translate("newtask", "Create", 0));
        pushButton_2->setText(QApplication::translate("newtask", "Cancel", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("newtask", "Work", 0)
         << QApplication::translate("newtask", "School", 0)
         << QApplication::translate("newtask", "Home", 0)
         << QApplication::translate("newtask", "Other Activities", 0)
        );
        label_3->setText(QApplication::translate("newtask", "Task Type", 0));
        label_4->setText(QApplication::translate("newtask", "hola", 0));
    } // retranslateUi

};

namespace Ui {
    class newtask: public Ui_newtask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTASK_H
