#ifndef SETTING_H
#define SETTING_H

#include <QMainWindow>

namespace Ui {
class setting;
}

class homepage;

class setting : public QMainWindow
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

    homepage *homepage_page = NULL;

private slots:
    void on_pushButton_clicked();

private:
    Ui::setting *ui;
};

#endif // SETTING_H
