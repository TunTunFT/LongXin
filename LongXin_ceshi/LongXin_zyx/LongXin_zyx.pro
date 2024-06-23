QT       += core gui network sql serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Esp8266Controller/esp8266controller.cpp \
    door/door.cpp \
    homepage/homepage.cpp \
    main.cpp \
    o_temperature/o_temperature.cpp \
    register/register.cpp \
    setting/setting.cpp \
    v4l2/showphoto.cpp \
    v4l2/v4l2.cpp \
    widget.cpp

HEADERS += \
    Esp8266Controller/esp8266controller.h \
    door/door.h \
    homepage/homepage.h \
    o_temperature/o_temperature.h \
    register/register.h \
    setting/setting.h \
    v4l2/showphoto.h \
    v4l2/v4l2.h \
    widget.h

FORMS += \
    door/door.ui \
    homepage/homepage.ui \
    o_temperature/o_temperature.ui \
    register/register.ui \
    setting/setting.ui \
    v4l2/showphoto.ui \
    v4l2/v4l2.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    background_image.qrc

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/lib/ -lQt5Mqtt
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/lib/ -lQt5Mqttd

#INCLUDEPATH += $$PWD/../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/include
#DEPENDPATH += $$PWD/../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/include

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/lib/ -lQt5Mqtt
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/lib/ -lQt5Mqttd

#INCLUDEPATH += $$PWD/../../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/include
#DEPENDPATH += $$PWD/../../../../qtmqtt-5.14.2/qtmqtt-5.14.2/build-qtmqtt-Desktop_Qt_5_14_2_MinGW_32_bit-Release/include

#DISTFILES +=

DISTFILES +=
