/********************************************************************************
** Form generated from reading UI file 'o_temperature.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_O_TEMPERATURE_H
#define UI_O_TEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_o_temperature
{
public:
    QWidget *centralwidget;
    QLabel *top;
    QPushButton *back;

    void setupUi(QMainWindow *o_temperature)
    {
        if (o_temperature->objectName().isEmpty())
            o_temperature->setObjectName(QString::fromUtf8("o_temperature"));
        o_temperature->resize(800, 480);
        o_temperature->setMinimumSize(QSize(800, 480));
        o_temperature->setMaximumSize(QSize(800, 480));
        o_temperature->setStyleSheet(QString::fromUtf8("#o_temperature{\n"
"background-image: url(:/image/background.jpg);\n"
"}\n"
""));
        centralwidget = new QWidget(o_temperature);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        top = new QLabel(centralwidget);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 800, 40));
        top->setStyleSheet(QString::fromUtf8("#top{\n"
"background-color:rgba(136, 138, 133, 0.8)\n"
"}\n"
""));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(0, 0, 40, 40));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/image/back.png);"));
        o_temperature->setCentralWidget(centralwidget);

        retranslateUi(o_temperature);

        QMetaObject::connectSlotsByName(o_temperature);
    } // setupUi

    void retranslateUi(QMainWindow *o_temperature)
    {
        o_temperature->setWindowTitle(QApplication::translate("o_temperature", "MainWindow", nullptr));
        top->setText(QString());
        back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class o_temperature: public Ui_o_temperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_O_TEMPERATURE_H
