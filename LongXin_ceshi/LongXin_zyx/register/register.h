#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QMainWindow>
#include "widget.h"

namespace Ui {
class Register;
}

class Widget;

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

    Widget *widget_page = NULL;

protected:
    void paintEvent(QPaintEvent *event) override; // 声明重写的 paintEvent 方法

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_sure_register_clicked();

private:
    Ui::Register *ui;



};

#endif // REGISTER_H
