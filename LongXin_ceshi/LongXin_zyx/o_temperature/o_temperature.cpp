#include "o_temperature.h"
#include "ui_o_temperature.h"
#include "homepage/homepage.h"
o_temperature::o_temperature(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::o_temperature)
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
}

o_temperature::~o_temperature()
{
    delete ui;
}

void o_temperature::on_back_clicked()
{
    this->homepage_page = new homepage;
    this->close();
    this->homepage_page->show();
}
