#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMainWindow>
#include "register/register.h"
#include "homepage/homepage.h"
#include <QSqlDatabase> //数据驱动
#include <QSqlQuery> //数据库执行语句
#include <QMessageBox>//消息盒子
#include <QDebug>

void sqlite_Init();

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Register;
class homepage;

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QMainWindow *parent = nullptr);
    ~Widget();

    Register *register_page=NULL;
    homepage *homepage_page=NULL;

protected:

    void mousePressEvent(QMouseEvent* event); //设置右键关闭窗口


private slots:
    void on_pushButton_login_clicked();
    void on_pushButton_register_clicked();


private:
    Ui::Widget *ui;

};
#endif // WIDGET_H
