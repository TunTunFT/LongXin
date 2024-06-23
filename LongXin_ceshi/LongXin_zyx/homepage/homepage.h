#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QMainWindow>
#include "widget.h"
#include "v4l2/v4l2.h"
#include "setting/setting.h"
#include "door/door.h"
#include "o_temperature/o_temperature.h"
namespace Ui {
class homepage;
}

class v4l2;
class Widget;
class setting;
class o_temperature;

class homepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit homepage(QMainWindow *parent = nullptr);
    ~homepage();

    Widget *widget_page=NULL;
    v4l2 *v4l2_page=NULL;
    setting *setting_page=NULL;
    door *door_page=NULL;
    o_temperature *o_temperature_page = NULL;

protected:
    void mousePressEvent(QMouseEvent* event); //设置右键关闭窗口

private slots:
    void on_back_clicked();

    void on_pushButton_v4l2_clicked();

    void on_pushButton_setting_clicked();

    void on_pushButton_access_control_clicked();

    void on_pushButton_outdoor_temperature_clicked();

private:
    Ui::homepage *ui;

};

#endif // HOMEPAGE_H
