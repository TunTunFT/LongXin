#include "door.h"
#include "ui_door.h"
#include "homepage/homepage.h"
#include <QPaintEvent>
#include <QDebug>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>
door::door(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::door),
    espController(new Esp8266Controller(this))
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);

    connect(espController, &Esp8266Controller::statusUpdated,
                this, &door::handleStatusUpdate);

    if (!espController->initialize()) {
        QMessageBox::critical(this, "Error", "Failed to initialize ESP8266 controller.");
    } else {
        if (!espController->configureESP8266()) {
            QMessageBox::critical(this, "Error", "Failed to configure ESP8266.");
        }
    }
}

door::~door()
{
    delete ui;
    delete espController;
}

//void door::on_sendCommandButton_clicked()
//{
//    // 假设有四个下位机，通过选择的下拉菜单确定目标
//    int targetDevice = ui->deviceSelector->currentIndex(); // 设备选择器的索引
//    // 假设指令格式为：TARGET_ID ACTION，其中ACTION为"OPEN"或"CLOSE"
//    QString command = QString("%1 OPEN").arg(targetDevice + 1); // 设备ID从1开始
//    QByteArray cmdBytes = command.toUtf8();
//    espController->sendCommand(cmdBytes);
//}

void door::handleStatusUpdate(const QString &status)
{
    QMessageBox::information(this, "Status", status);
}

void door::on_back_clicked()
{
    this->homepage_page = new homepage;
    this->close();
    this->homepage_page->show();
}

void door::on_pushButton_2_clicked()
{
    espController->sendCommand("1 OPEN");
}

void door::on_pushButton_3_clicked()
{
    espController->sendCommand("1 CLOSE");
}

void door::on_pushButton_4_clicked()
{
    espController->sendCommand("2 OPEN");
}

void door::on_pushButton_5_clicked()
{
    espController->sendCommand("2 CLOSE");
}

void door::on_pushButton_6_clicked()
{
    espController->sendCommand("3 OPEN");
}

void door::on_pushButton_7_clicked()
{
    espController->sendCommand("3 CLOSE");
}

void door::on_pushButton_8_clicked()
{
    espController->sendCommand("4 OPEN");
}

void door::on_pushButton_9_clicked()
{
    espController->sendCommand("4 CLOSE");
}
