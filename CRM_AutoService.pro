TEMPLATE = app

QT += core
QT += qml
QT += quick
QT += gui
QT += network
QT += widgets
QT += sql

VERSION = 1.0.0.0

win32
{
   RC_ICONS = $$PWD/images/autoService-logo.ico
}

CONFIG += c++11

SOURCES += main.cpp \
    AddClient.cpp \
    AddEmployee.cpp \
    AddOrder.cpp \
    AddSparePart.cpp \
    AddTask.cpp \
    Global.cpp \
    ListClients.cpp \
    ListEmployees.cpp \
    ListOrders.cpp \
    ListSpareParts.cpp \
    ListTasks.cpp \
    SettingsWindow.cpp \
    StartWindow.cpp \
    UpdateClients.cpp \
    UpdateEmployee.cpp \
    UpdateOrders.cpp \
    UpdateSparePart.cpp \
    UpdateTask.cpp \
    ViewClient.cpp \
    ViewEmployee.cpp \
    ViewOrders.cpp \
    ViewSparePart.cpp \
    ViewTask.cpp

RESOURCES += qml.qrc \
    images.qrc \
    translations.qrc

FORMS += \
    AddClient.ui \
    AddEmployee.ui \
    AddOrder.ui \
    AddSparePart.ui \
    AddTask.ui \
    ListClients.ui \
    ListEmployees.ui \
    ListOrders.ui \
    ListSpareParts.ui \
    ListTasks.ui \
    SettingsWindow.ui \
    StartWindow.ui \
    UpdateClients.ui \
    UpdateEmployee.ui \
    UpdateOrders.ui \
    UpdateSparePart.ui \
    UpdateTask.ui \
    ViewClient.ui \
    ViewEmployee.ui \
    ViewOrders.ui \
    ViewSparePart.ui \
    ViewTask.ui

HEADERS += \
    AddClient.h \
    AddEmployee.h \
    AddOrder.h \
    AddSparePart.h \
    AddTask.h \
    Global.h \
    ListClients.h \
    ListEmployees.h \
    ListOrders.h \
    ListSpareParts.h \
    ListTasks.h \
    SettingsWindow.h \
    StartWindow.h \
    UpdateClients.h \
    UpdateEmployee.h \
    UpdateOrders.h \
    UpdateSparePart.h \
    UpdateTask.h \
    ViewClient.h \
    ViewEmployee.h \
    ViewOrders.h \
    ViewSparePart.h \
    ViewTask.h

CODECFORSRC = UTF-8
