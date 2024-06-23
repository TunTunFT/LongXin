#include "homepage.h"
#include "ui_homepage.h"
#include "widget.h"
#include "v4l2/v4l2.h"
#include "setting/setting.h"
#include "door/door.h"
#include "o_temperature/o_temperature.h"
#include <QPaintEvent>
#include <QDebug>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>
homepage::homepage(QMainWindow *parent) :
    QMainWindow(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
}

homepage::~homepage()
{
    delete ui;
}

//右键关闭窗口
void homepage::mousePressEvent(QMouseEvent* event)
{
    switch (event->button())
    {
        case Qt::RightButton:
            this->close();
            break;
        default:
            break;
    }
}

/***************按钮****************/
//返回按钮
void homepage::on_back_clicked()
{
    this->widget_page = new Widget;
    this->hide();
    this->widget_page->show();
}

void homepage::on_pushButton_v4l2_clicked()
{
    this->v4l2_page = new v4l2;
    this->hide();
    this->v4l2_page->show();
}

void homepage::on_pushButton_setting_clicked()
{
    this->setting_page = new setting;
    this->hide();
    this->setting_page->show();
}

void homepage::on_pushButton_access_control_clicked()
{
    this->door_page = new door;
    this->hide();
    this->door_page->show();
}

void homepage::on_pushButton_outdoor_temperature_clicked()
{
    this->o_temperature_page = new o_temperature;
    this->hide();
    this->o_temperature_page->show();
}
