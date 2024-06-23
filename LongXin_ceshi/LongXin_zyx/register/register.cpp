#include "register.h"
#include "ui_register.h"
#include "homepage/homepage.h"
#include <QPaintEvent>
#include <QDebug>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>
#include <QWidget>

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
}

Register::~Register()
{
    delete ui;
}


//重绘
void Register::paintEvent([[maybe_unused]] QPaintEvent *event)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}


//返回按键
void Register::on_pushButton_back_clicked()
{
    this->widget_page = new Widget;
    this->close();
    this->widget_page->show();
}

//注册按键
void Register::on_pushButton_sure_register_clicked()
{
    sqlite_Init();
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_passwd->text();
    QString surepass = ui->lineEdit_surepasswd->text();
    //判断密码是否一致
    if(password == surepass)
    {
        QString sql=QString("insert into user(username,password) values('%1','%2');")
                .arg(username).arg(password);
        //创建执行语句对象
        QSqlQuery query;
        //判断执行结果
        if(!query.exec(sql))
        {
            qDebug()<<"insert into error";
            QMessageBox::information(this,"注册认证","插入失败！");
        }
        else
        {
            qDebug()<<"insert into success";
            QMessageBox::information(this,"注册认证","插入成功！");
            Widget *w = new Widget;
            w->show();
            this->close();
        }
    }
    else
    {
        QMessageBox::information(this,"注册认证","两次密码输入不一致");
    }
}

