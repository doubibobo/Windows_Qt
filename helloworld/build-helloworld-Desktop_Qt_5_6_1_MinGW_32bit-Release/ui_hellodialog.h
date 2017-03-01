/********************************************************************************
** Form generated from reading UI file 'hellodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG_H
#define UI_HELLODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuHello_World;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloDialog)
    {
        if (HelloDialog->objectName().isEmpty())
            HelloDialog->setObjectName(QStringLiteral("HelloDialog"));
        HelloDialog->resize(833, 541);
        centralWidget = new QWidget(HelloDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 380, 93, 28));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(260, 330, 115, 19));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(330, 330, 115, 19));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 330, 72, 15));
        HelloDialog->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloDialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 833, 26));
        menuHello_World = new QMenu(menuBar);
        menuHello_World->setObjectName(QStringLiteral("menuHello_World"));
        HelloDialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloDialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloDialog->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloDialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloDialog->setStatusBar(statusBar);

        menuBar->addAction(menuHello_World->menuAction());

        retranslateUi(HelloDialog);

        QMetaObject::connectSlotsByName(HelloDialog);
    } // setupUi

    void retranslateUi(QMainWindow *HelloDialog)
    {
        HelloDialog->setWindowTitle(QApplication::translate("HelloDialog", "HelloDialog", 0));
        pushButton->setText(QApplication::translate("HelloDialog", "ok", 0));
        radioButton->setText(QApplication::translate("HelloDialog", "male", 0));
        radioButton_2->setText(QApplication::translate("HelloDialog", "female", 0));
        label->setText(QApplication::translate("HelloDialog", "sex", 0));
        menuHello_World->setTitle(QApplication::translate("HelloDialog", "hello, World!", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog: public Ui_HelloDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG_H
