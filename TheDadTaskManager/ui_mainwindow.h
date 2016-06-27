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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *logo;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textleft2;
    QPushButton *prev;
    QPushButton *next;
    QPushButton *refresh;
    QTextBrowser *textleft1;
    QLineEdit *textright1;
    QTextEdit *textright2;
    QComboBox *comboBox;
    QPushButton *create;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(894, 392);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(40, 10, 441, 71));
        logo->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/DadTaskManager-Logo.png")));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 80, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 140, 91, 21));
        textleft2 = new QTextBrowser(centralwidget);
        textleft2->setObjectName(QStringLiteral("textleft2"));
        textleft2->setGeometry(QRect(90, 160, 256, 192));
        prev = new QPushButton(centralwidget);
        prev->setObjectName(QStringLiteral("prev"));
        prev->setGeometry(QRect(10, 240, 75, 41));
        next = new QPushButton(centralwidget);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(350, 240, 75, 41));
        refresh = new QPushButton(centralwidget);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setGeometry(QRect(10, 40, 81, 31));
        textleft1 = new QTextBrowser(centralwidget);
        textleft1->setObjectName(QStringLiteral("textleft1"));
        textleft1->setGeometry(QRect(100, 110, 241, 31));
        textright1 = new QLineEdit(centralwidget);
        textright1->setObjectName(QStringLiteral("textright1"));
        textright1->setGeometry(QRect(570, 110, 271, 31));
        textright2 = new QTextEdit(centralwidget);
        textright2->setObjectName(QStringLiteral("textright2"));
        textright2->setGeometry(QRect(570, 160, 271, 141));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(570, 320, 171, 22));
        create = new QPushButton(centralwidget);
        create->setObjectName(QStringLiteral("create"));
        create->setGeometry(QRect(770, 320, 75, 23));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        logo->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Task Title", 0));
        label_2->setText(QApplication::translate("MainWindow", "Task Description", 0));
        prev->setText(QApplication::translate("MainWindow", "Prev.", 0));
        next->setText(QApplication::translate("MainWindow", "Next", 0));
        refresh->setText(QApplication::translate("MainWindow", "Refresh", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Work", 0)
         << QApplication::translate("MainWindow", "Home", 0)
         << QApplication::translate("MainWindow", "School", 0)
         << QApplication::translate("MainWindow", "Other Activities", 0)
        );
        create->setText(QApplication::translate("MainWindow", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
