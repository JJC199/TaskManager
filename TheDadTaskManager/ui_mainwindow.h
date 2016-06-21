/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *workTask;
    QPushButton *schoolTask;
    QPushButton *houseTask;
    QPushButton *oaTask;
    QColumnView *columnView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(552, 355);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 491, 51));
        workTask = new QPushButton(centralWidget);
        workTask->setObjectName(QStringLiteral("workTask"));
        workTask->setGeometry(QRect(10, 260, 111, 31));
        schoolTask = new QPushButton(centralWidget);
        schoolTask->setObjectName(QStringLiteral("schoolTask"));
        schoolTask->setGeometry(QRect(140, 260, 121, 31));
        houseTask = new QPushButton(centralWidget);
        houseTask->setObjectName(QStringLiteral("houseTask"));
        houseTask->setGeometry(QRect(280, 260, 111, 31));
        oaTask = new QPushButton(centralWidget);
        oaTask->setObjectName(QStringLiteral("oaTask"));
        oaTask->setGeometry(QRect(410, 260, 121, 31));
        columnView = new QColumnView(centralWidget);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(120, 50, 256, 192));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "The Dad Task Manager", 0));
        workTask->setText(QApplication::translate("MainWindow", "Work", 0));
        schoolTask->setText(QApplication::translate("MainWindow", "School", 0));
        houseTask->setText(QApplication::translate("MainWindow", "House", 0));
        oaTask->setText(QApplication::translate("MainWindow", "Other Activities", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
