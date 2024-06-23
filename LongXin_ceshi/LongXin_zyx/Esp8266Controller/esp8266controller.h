#ifndef ESP8266CONTROLLER_H
#define ESP8266CONTROLLER_H


#include <QObject>
#include <QSerialPort>

class Esp8266Controller : public QObject
{
    Q_OBJECT
public:
    Esp8266Controller(QObject *parent = nullptr);
    ~Esp8266Controller();
//    bool initialize(const QString &portName = "COM3", int baudRate = 9600);
    bool initialize(const QString &portName, int baudRate);
    bool initialize();
    bool configureESP8266();
    void sendCommand(const QByteArray &command);

signals:
    void statusUpdated(const QString &status);

private slots:
    void handleResponse();

private:
    QSerialPort serial;
};

#endif // ESP8266CONTROLLER_H
