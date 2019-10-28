TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
LIBS += -L../BuildDir/lib  -lefence
DESTDIR=../BuildDir/bin

SOURCES += \
        main.cpp
