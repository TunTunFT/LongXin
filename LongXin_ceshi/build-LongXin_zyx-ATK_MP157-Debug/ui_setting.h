/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QWidget *centralwidget;
    QLabel *top;
    QPushButton *pushButton;

    void setupUi(QMainWindow *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(800, 480);
        setting->setMinimumSize(QSize(800, 480));
        setting->setMaximumSize(QSize(800, 480));
        setting->setStyleSheet(QString::fromUtf8("#setting{\n"
"background-image: url(:/image/background.jpg);\n"
"}"));
        centralwidget = new QWidget(setting);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 480));
        centralwidget->setMaximumSize(QSize(16777215, 480));
        top = new QLabel(centralwidget);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 800, 40));
        top->setStyleSheet(QString::fromUtf8("background-color:rgba(136, 138, 133, 0.8)"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/image/back.png);"));
        setting->setCentralWidget(centralwidget);

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QMainWindow *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "MainWindow", nullptr));
        top->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
