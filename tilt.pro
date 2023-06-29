TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QT += testlib

SOURCES += \
        MeticRegister.cpp \
        Test_MetricRegister.cpp \
        main.cpp

HEADERS += \
    MeticRegister.h
