#include "esp8266controller.h"
#include <QByteArray>
#include <QTextStream>
#include <QTimer>

Esp8266Controller::Esp8266Controller(QObject *parent)
    : QObject(parent)
{
}

Esp8266Controller::~Esp8266Controller()
{
    if (serial.isOpen()) {
        serial.close();
    }
}

// 初始化串口并设置参数
bool Esp8266Controller::initialize(const QString &portName = "/dev/ttySTM1", int baudRate = 9600)
{
    serial.setPortName(portName);
    serial.setBaudRate(baudRate);
    if (!serial.open(QIODevice::ReadWrite)) {
        emit statusUpdated("Failed to open serial port.");
        return false;
    }
    return true;
}

// 添加一个重载函数，提供默认参数
bool Esp8266Controller::initialize()
{
    return initialize("COM3", 9600);
}

// 配置ESP8266连接Wi-Fi并设置为透传模式
bool Esp8266Controller::configureESP8266()
{
    QStringList commands = {
        "AT\r\n",
        "AT+CWMODE=1\r\n", //Station mode
        "AT+CWJAP=\"SSID\",\"PASSWORD\"\r\n", //SSID and PASSWORD
        "AT+CIPMUX=1\r\n", // Enable multiple connections
    };

    foreach (const QString &cmd, commands) {
        serial.write(cmd.toUtf8());
        serial.waitForBytesWritten(1000);
        serial.waitForReadyRead(2000);
        if (serial.readAll().contains("ERROR")) {
            return false;
        }
    }
    return true;
}

// 发送指令到ESP8266
void Esp8266Controller::sendCommand(const QByteArray &command)
{
    if (!serial.isOpen()) {
          emit statusUpdated("Serial port is not open.");
          return; // 或者根据情况处理，比如尝试重新打开串口
    }
    //这里的实现简化了命令发送逻辑，实际应用中需要根据CIPSEND的响应来确定何时发送数据
    QString cmd = "AT+CIPSEND=" + QString::number(serial.portName().toInt()) + "," + QString::number(command.size()) + "\r\n";
    serial.write(cmd.toUtf8());
    serial.waitForBytesWritten(1000);
    serial.write(command + "\r\n");
    serial.waitForReadyRead(2000);
}

// 处理ESP8266的响应，这里仅为示例未具体实现
void Esp8266Controller::handleResponse()
{
    QByteArray response = serial.readAll();
    // 实际应用中，根据响应内容做进一步处理或反馈
}
