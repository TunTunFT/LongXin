#ifndef DOOR_H
#define DOOR_H

#include <QMainWindow>
#include "Esp8266Controller/esp8266controller.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class door;
}

class homepage;

class door : public QMainWindow
{
    Q_OBJECT

public:
    explicit door(QMainWindow *parent = nullptr);
    ~door();

    homepage *homepage_page = NULL;

protected:

private slots:
    void on_back_clicked();
//    void on_sendCommandButton_clicked();
    void handleStatusUpdate(const QString &status); // 确保这个声明存在

    void on_pushButton_2_clicked();//open 1

    void on_pushButton_3_clicked();//close 1

    void on_pushButton_4_clicked();//open 2

    void on_pushButton_5_clicked();//close 2

    void on_pushButton_6_clicked();//open 3

    void on_pushButton_7_clicked();//close 3

    void on_pushButton_8_clicked();//open 4

    void on_pushButton_9_clicked();//close 4

private:
    Ui::door *ui;
    Esp8266Controller *espController;
};

#endif // DOOR_H
