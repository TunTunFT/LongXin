/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homepage
{
public:
    QWidget *layoutWidget;
    QLabel *top;
    QLabel *electric;
    QLabel *wifi;
    QPushButton *back;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_outdoor_temperature;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_indoor_temperature;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_v4l2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_liquid_level;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_gas;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_airpressure;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_access_control;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_setting;

    void setupUi(QMainWindow *homepage)
    {
        if (homepage->objectName().isEmpty())
            homepage->setObjectName(QString::fromUtf8("homepage"));
        homepage->resize(800, 480);
        homepage->setStyleSheet(QString::fromUtf8("QWidget#homepage{\n"
"background-image: url(:/image/background.jpg);\n"
"}\n"
"\n"
"\n"
""));
        layoutWidget = new QWidget(homepage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setStyleSheet(QString::fromUtf8(""));
        top = new QLabel(layoutWidget);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 800, 40));
        top->setStyleSheet(QString::fromUtf8("#top{\n"
"background-color:rgba(136, 138, 133, 0.8)\n"
"}\n"
""));
        electric = new QLabel(layoutWidget);
        electric->setObjectName(QString::fromUtf8("electric"));
        electric->setGeometry(QRect(760, 0, 40, 40));
        electric->setStyleSheet(QString::fromUtf8("border-image: url(:/image/electric_quantity.png);"));
        wifi = new QLabel(layoutWidget);
        wifi->setObjectName(QString::fromUtf8("wifi"));
        wifi->setGeometry(QRect(710, 0, 40, 40));
        wifi->setStyleSheet(QString::fromUtf8("border-image: url(:/image/wifi.png);"));
        back = new QPushButton(layoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(0, 0, 40, 40));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/image/back.png);"));
        layoutWidget1 = new QWidget(layoutWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 70, 745, 331));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_outdoor_temperature = new QPushButton(layoutWidget1);
        pushButton_outdoor_temperature->setObjectName(QString::fromUtf8("pushButton_outdoor_temperature"));
        pushButton_outdoor_temperature->setMinimumSize(QSize(150, 100));
        pushButton_outdoor_temperature->setMaximumSize(QSize(150, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Chiller"));
        font.setPointSize(12);
        pushButton_outdoor_temperature->setFont(font);
        pushButton_outdoor_temperature->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout->addWidget(pushButton_outdoor_temperature);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_indoor_temperature = new QPushButton(layoutWidget1);
        pushButton_indoor_temperature->setObjectName(QString::fromUtf8("pushButton_indoor_temperature"));
        pushButton_indoor_temperature->setMinimumSize(QSize(150, 100));
        pushButton_indoor_temperature->setMaximumSize(QSize(150, 100));
        QFont font1;
        font1.setPointSize(12);
        pushButton_indoor_temperature->setFont(font1);
        pushButton_indoor_temperature->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout->addWidget(pushButton_indoor_temperature);

        horizontalSpacer_4 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_v4l2 = new QPushButton(layoutWidget1);
        pushButton_v4l2->setObjectName(QString::fromUtf8("pushButton_v4l2"));
        pushButton_v4l2->setMinimumSize(QSize(150, 100));
        pushButton_v4l2->setMaximumSize(QSize(150, 100));
        pushButton_v4l2->setFont(font1);
        pushButton_v4l2->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout->addWidget(pushButton_v4l2);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_liquid_level = new QPushButton(layoutWidget1);
        pushButton_liquid_level->setObjectName(QString::fromUtf8("pushButton_liquid_level"));
        pushButton_liquid_level->setMinimumSize(QSize(150, 100));
        pushButton_liquid_level->setMaximumSize(QSize(150, 100));
        pushButton_liquid_level->setFont(font1);
        pushButton_liquid_level->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout->addWidget(pushButton_liquid_level);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_gas = new QPushButton(layoutWidget1);
        pushButton_gas->setObjectName(QString::fromUtf8("pushButton_gas"));
        pushButton_gas->setMinimumSize(QSize(150, 100));
        pushButton_gas->setMaximumSize(QSize(150, 100));
        pushButton_gas->setFont(font1);
        pushButton_gas->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout_2->addWidget(pushButton_gas);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pushButton_airpressure = new QPushButton(layoutWidget1);
        pushButton_airpressure->setObjectName(QString::fromUtf8("pushButton_airpressure"));
        pushButton_airpressure->setMaximumSize(QSize(150, 100));
        pushButton_airpressure->setSizeIncrement(QSize(150, 100));
        pushButton_airpressure->setFont(font1);
        pushButton_airpressure->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout_2->addWidget(pushButton_airpressure);

        horizontalSpacer_7 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        pushButton_access_control = new QPushButton(layoutWidget1);
        pushButton_access_control->setObjectName(QString::fromUtf8("pushButton_access_control"));
        pushButton_access_control->setMinimumSize(QSize(150, 100));
        pushButton_access_control->setMaximumSize(QSize(150, 100));
        pushButton_access_control->setFont(font1);
        pushButton_access_control->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout_2->addWidget(pushButton_access_control);

        horizontalSpacer_8 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        pushButton_setting = new QPushButton(layoutWidget1);
        pushButton_setting->setObjectName(QString::fromUtf8("pushButton_setting"));
        pushButton_setting->setMinimumSize(QSize(150, 100));
        pushButton_setting->setMaximumSize(QSize(150, 100));
        pushButton_setting->setFont(font1);
        pushButton_setting->setStyleSheet(QString::fromUtf8("\n"
"border:3px solid blue;\n"
"border-radius:25px;\n"
"\n"
"background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 rgb(255, 242, 187), stop: 1 rgb(255, 223, 174));"));

        horizontalLayout_2->addWidget(pushButton_setting);


        verticalLayout->addLayout(horizontalLayout_2);

        homepage->setCentralWidget(layoutWidget);

        retranslateUi(homepage);

        QMetaObject::connectSlotsByName(homepage);
    } // setupUi

    void retranslateUi(QMainWindow *homepage)
    {
        homepage->setWindowTitle(QApplication::translate("homepage", "Form", nullptr));
        top->setText(QString());
        electric->setText(QString());
        wifi->setText(QString());
        back->setText(QString());
        pushButton_outdoor_temperature->setText(QApplication::translate("homepage", "\345\244\226\347\225\214\346\270\251\345\272\246\347\233\221\346\265\213", nullptr));
        pushButton_indoor_temperature->setText(QApplication::translate("homepage", "\345\272\223\345\206\205\346\270\251\346\271\277\345\272\246\347\233\221\346\265\213", nullptr));
        pushButton_v4l2->setText(QApplication::translate("homepage", "\350\247\206\351\242\221\347\233\221\346\216\247", nullptr));
        pushButton_liquid_level->setText(QApplication::translate("homepage", "\345\210\266\345\206\267\345\211\202\346\266\262\344\275\215\347\233\221\346\265\213", nullptr));
        pushButton_gas->setText(QApplication::translate("homepage", "\346\260\224\344\275\223\346\265\223\345\272\246\347\233\221\346\265\213", nullptr));
        pushButton_airpressure->setText(QApplication::translate("homepage", "\346\260\224\345\216\213\347\233\221\346\265\213", nullptr));
        pushButton_access_control->setText(QApplication::translate("homepage", "\351\227\250\347\246\201\347\263\273\347\273\237", nullptr));
        pushButton_setting->setText(QApplication::translate("homepage", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homepage: public Ui_homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
