/********************************************************************************
** Form generated from reading UI file 'controllerwidget.ui'
**
** Created: Mon May 24 15:54:59 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLERWIDGET_H
#define UI_CONTROLLERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControllerWidget
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *ControllerWidget)
    {
        if (ControllerWidget->objectName().isEmpty())
            ControllerWidget->setObjectName(QString::fromUtf8("ControllerWidget"));
        ControllerWidget->resize(1920, 1080);
        centralWidget = new QWidget(ControllerWidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ControllerWidget->setCentralWidget(centralWidget);

        retranslateUi(ControllerWidget);

        QMetaObject::connectSlotsByName(ControllerWidget);
    } // setupUi

    void retranslateUi(QMainWindow *ControllerWidget)
    {
        ControllerWidget->setWindowTitle(QApplication::translate("ControllerWidget", "ControllerWidget", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ControllerWidget: public Ui_ControllerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLERWIDGET_H
