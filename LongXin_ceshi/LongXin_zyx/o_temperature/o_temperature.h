#ifndef O_TEMPERATURE_H
#define O_TEMPERATURE_H

#include <QMainWindow>
#include <homepage/homepage.h>

namespace Ui {
class o_temperature;
}

class o_temperature : public QMainWindow
{
    Q_OBJECT

public:
    explicit o_temperature(QWidget *parent = nullptr);
    ~o_temperature();

    homepage *homepage_page = NULL;

private slots:
    void on_back_clicked();

private:
    Ui::o_temperature *ui;
};

#endif // O_TEMPERATURE_H
