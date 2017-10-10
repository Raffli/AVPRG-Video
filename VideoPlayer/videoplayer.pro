#-------------------------------------------------
#
# Project created by QtCreator 2014-07-15T19:38:24
#
#-------------------------------------------------

QT       += core gui widgets



TARGET = VideoPlayer
TEMPLATE = app


SOURCES += main.cpp\
        videoplayer.cpp \
    copyprocessor.cpp \
    brightnessprozessor.cpp \
    colorkeyer.cpp

HEADERS  += videoplayer.h \
    copyprocessor.h \
    brightnessprozessor.h \
    colorkeyer.h

FORMS    += videoplayer.ui

include(../opencv/videoengine.pri)
