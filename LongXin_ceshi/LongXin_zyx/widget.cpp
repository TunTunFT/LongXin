#include "widget.h"
#include "ui_widget.h"
#include "homepage/homepage.h"
#include <QWidget>
#include <QPaintEvent>
#include <QDebug>
#include <QStyleOption>
#include <QPainter>
#include <QStyle>

Widget::Widget(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置窗口无边框
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);

//    //允许设置背景图
//    this->setAutoFillBackground(true);
//    //创建图片控件,选择图片，并且设置大小
//    QPixmap pix1 = QPixmap(":/image/widget.jpg").scaled(this->size());

//    //将图片设置为背景
//    QPalette palette;
//    palette.setBrush(QPalette::Background,QBrush(pix1));
//    this->setPalette(palette);

}

Widget::~Widget()
{
    delete ui;
}


//右键关闭窗口
void Widget::mousePressEvent(QMouseEvent* event)
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
/*****************按钮******************/
//注册按钮
void Widget::on_pushButton_register_clicked()
{
    this->register_page = new Register;
    this->hide();
    this->register_page->show();
}

//登录按钮
void Widget::on_pushButton_login_clicked()
{
        sqlite_Init();
        //获取用户输入
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();
        //构建SQL查询语句
        QString sql=QString("select * from user where username='%1' and password='%2'")
                .arg(username).arg(password);
        //创建执行语句对象
        QSqlQuery query(sql);
        //判断执行结果
        if(!query.next())
        {
            qDebug()<<"Login error";
            QMessageBox::information(this,"登录认证","登录失败,账户或者密码错误");
        }
        else
        {
            qDebug()<<
                       "Login success";
            QMessageBox::information(this,"登录认证","登录成功");
            //登录成功后可以跳转到其他页面
            this->homepage_page = new homepage;
            this->homepage_page->show();
            this->close();
        }
}

//初始化sql
void sqlite_Init()
{
    //添加数据库驱动
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名称
    db.setDatabaseName("user.db");
    //打开数据库连接
    if(!db.open())
    {
        qDebug()<<"open error";
    }
    //创建用户表create excle
    QString createsql=QString("create table if not exists user(id integer primary key autoincrement,"
                        "username ntext unique not NULL,"
                        "password ntext not NULL)");
    //执行创建表的SQL命令
    QSqlQuery query;
    if(!query.exec(createsql)){
        qDebug()<<"table create error";
    }
    else{
        qDebug()<<"table create success";
    }
}
