#include "setting.h"
#include "ui_setting.h"
#include "homepage/homepage.h"

setting::setting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton_clicked()
{
    this->homepage_page = new homepage;
    this->close();
    this->homepage_page->show();
}
