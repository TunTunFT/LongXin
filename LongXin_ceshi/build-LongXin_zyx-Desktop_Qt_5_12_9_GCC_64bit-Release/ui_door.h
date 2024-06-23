/********************************************************************************
** Form generated from reading UI file 'door.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOOR_H
#define UI_DOOR_H

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

class Ui_door
{
public:
    QWidget *centralwidget;
    QLabel *top;
    QPushButton *back;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *door)
    {
        if (door->objectName().isEmpty())
            door->setObjectName(QString::fromUtf8("door"));
        door->resize(800, 480);
        door->setMinimumSize(QSize(800, 480));
        door->setMaximumSize(QSize(800, 480));
        door->setStyleSheet(QString::fromUtf8("#door{\n"
"border-image: url(:/image/background.jpg);\n"
"}"));
        centralwidget = new QWidget(door);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        top = new QLabel(centralwidget);
        top->setObjectName(QString::fromUtf8("top"));
        top->setGeometry(QRect(0, 0, 800, 40));
        top->setStyleSheet(QString::fromUtf8("background-color:rgba(136, 138, 133, 0.8)"));
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(0, 0, 40, 40));
        back->setStyleSheet(QString::fromUtf8("border-image: url(:/image/back.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 50, 120, 60));
        QFont font;
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 140, 771, 221));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(254, 241, 183);"));

        verticalLayout->addWidget(label);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(160, 60));
        pushButton_2->setMaximumSize(QSize(160, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 88, 81);"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(160, 60));
        pushButton_3->setMaximumSize(QSize(160, 60));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 168, 248);"));

        verticalLayout->addWidget(pushButton_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(254, 241, 183);"));

        verticalLayout_2->addWidget(label_2);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(160, 60));
        pushButton_4->setMaximumSize(QSize(160, 60));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 88, 81);"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(160, 60));
        pushButton_5->setMaximumSize(QSize(160, 60));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 168, 248);"));

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(254, 241, 183);"));

        verticalLayout_3->addWidget(label_3);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(160, 60));
        pushButton_6->setMaximumSize(QSize(160, 60));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 88, 81);"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(160, 60));
        pushButton_7->setMaximumSize(QSize(160, 60));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 168, 248);"));

        verticalLayout_3->addWidget(pushButton_7);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(254, 241, 183);"));

        verticalLayout_4->addWidget(label_4);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(160, 60));
        pushButton_8->setMaximumSize(QSize(160, 60));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 88, 81);"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(160, 60));
        pushButton_9->setMaximumSize(QSize(160, 60));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 168, 248);"));

        verticalLayout_4->addWidget(pushButton_9);


        horizontalLayout->addLayout(verticalLayout_4);

        door->setCentralWidget(centralwidget);

        retranslateUi(door);

        QMetaObject::connectSlotsByName(door);
    } // setupUi

    void retranslateUi(QMainWindow *door)
    {
        door->setWindowTitle(QApplication::translate("door", "MainWindow", nullptr));
        top->setText(QString());
        back->setText(QString());
        label_5->setText(QApplication::translate("door", "door", nullptr));
        label->setText(QApplication::translate("door", "       1", nullptr));
        pushButton_2->setText(QApplication::translate("door", "open", nullptr));
        pushButton_3->setText(QApplication::translate("door", "close", nullptr));
        label_2->setText(QApplication::translate("door", "       2", nullptr));
        pushButton_4->setText(QApplication::translate("door", "open", nullptr));
        pushButton_5->setText(QApplication::translate("door", "close", nullptr));
        label_3->setText(QApplication::translate("door", "       3", nullptr));
        pushButton_6->setText(QApplication::translate("door", "open", nullptr));
        pushButton_7->setText(QApplication::translate("door", "close", nullptr));
        label_4->setText(QApplication::translate("door", "       4", nullptr));
        pushButton_8->setText(QApplication::translate("door", "open", nullptr));
        pushButton_9->setText(QApplication::translate("door", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class door: public Ui_door {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOOR_H
