/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QPushButton *pushButton_back;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_passwd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_surepasswd;
    QPushButton *pushButton_sure_register;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(800, 480);
        Register->setMinimumSize(QSize(800, 480));
        Register->setMaximumSize(QSize(800, 480));
        Register->setStyleSheet(QString::fromUtf8("QWidget#Register{\n"
"	background-image: url(:/image/widget.jpg);\n"
"}"));
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 90, 500, 300));
        widget->setMinimumSize(QSize(500, 300));
        widget->setMaximumSize(QSize(500, 300));
        widget->setSizeIncrement(QSize(500, 300));
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"	\n"
"	background-image: url(:/image/register.jpg);\n"
"}"));
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 10, 80, 40));
        pushButton_back->setMinimumSize(QSize(80, 40));
        pushButton_back->setMaximumSize(QSize(80, 40));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(255, 255, 255)"));
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 65, 341, 170));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(100, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 50));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_passwd = new QLineEdit(layoutWidget);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        lineEdit_passwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_passwd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_surepasswd = new QLineEdit(layoutWidget);
        lineEdit_surepasswd->setObjectName(QString::fromUtf8("lineEdit_surepasswd"));
        lineEdit_surepasswd->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"background-color:rgb(255, 255, 255)"));
        lineEdit_surepasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_surepasswd);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        pushButton_sure_register = new QPushButton(widget);
        pushButton_sure_register->setObjectName(QString::fromUtf8("pushButton_sure_register"));
        pushButton_sure_register->setGeometry(QRect(200, 240, 120, 40));
        pushButton_sure_register->setMinimumSize(QSize(120, 40));
        pushButton_sure_register->setMaximumSize(QSize(120, 40));
        pushButton_sure_register->setFont(font);
        pushButton_sure_register->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background-color:rgb(255, 255, 255)"));
        label_4 = new QLabel(Register);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 32, 50, 50));
        label_4->setMinimumSize(QSize(50, 50));
        label_4->setMaximumSize(QSize(50, 50));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/image/register_zhuce.png);"));
        label_5 = new QLabel(Register);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 50, 130, 40));
        label_5->setMinimumSize(QSize(130, 40));
        label_5->setMaximumSize(QSize(130, 40));
        label_5->setFont(font);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", nullptr));
        pushButton_back->setText(QApplication::translate("Register", "\350\277\224\345\233\236", nullptr));
        label->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Register", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_sure_register->setText(QApplication::translate("Register", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Register", "\346\263\250\345\206\214\346\226\260\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
