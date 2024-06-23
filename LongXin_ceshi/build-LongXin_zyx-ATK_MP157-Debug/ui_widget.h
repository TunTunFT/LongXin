/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_register;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_login;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 480);
        Widget->setMinimumSize(QSize(800, 480));
        Widget->setMaximumSize(QSize(800, 480));
        Widget->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setMinimumSize(QSize(800, 480));
        layoutWidget->setMaximumSize(QSize(800, 480));
        layoutWidget->setStyleSheet(QString::fromUtf8("QWidget#layoutWidget{\n"
"background-image: url(:/image/widget.jpg);\n"
"}\n"
""));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 60));
        label_3->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_6 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(90, 50));
        label->setMaximumSize(QSize(90, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(250, 25));
        lineEdit_username->setMaximumSize(QSize(250, 25));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_username);

        horizontalSpacer_8 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(90, 50));
        label_2->setMaximumSize(QSize(90, 50));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy);
        lineEdit_password->setMinimumSize(QSize(250, 25));
        lineEdit_password->setMaximumSize(QSize(250, 25));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"background-color:rgb(255, 255, 255)"));
        lineEdit_password->setMaxLength(32772);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);

        horizontalSpacer_9 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 8);

        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_register = new QPushButton(layoutWidget);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setMinimumSize(QSize(150, 50));
        pushButton_register->setMaximumSize(QSize(150, 50));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_register->setFont(font2);
        pushButton_register->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(pushButton_register);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        pushButton_login->setMinimumSize(QSize(150, 50));
        pushButton_login->setMaximumSize(QSize(150, 50));
        pushButton_login->setFont(font2);
        pushButton_login->setStyleSheet(QString::fromUtf8("border-radius:25px;\n"
"background-color:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(pushButton_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_2->setStretch(2, 15);
        verticalLayout_2->setStretch(3, 1);

        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 5);
        horizontalLayout_4->setStretch(2, 1);
        Widget->setCentralWidget(layoutWidget);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QMainWindow *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_3->setText(QApplication::translate("Widget", "      \345\267\245\344\270\232\344\275\216\346\270\251\345\206\267\345\272\223\346\227\240\347\272\277\344\274\240\346\204\237\347\233\221\346\216\247\347\263\273\347\273\237", nullptr));
        label->setText(QApplication::translate("Widget", "  \347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        lineEdit_username->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("Widget", "  \345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit_password->setPlaceholderText(QApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201", nullptr));
        pushButton_register->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        pushButton_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
