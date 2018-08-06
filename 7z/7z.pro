#-------------------------------------------------
#
# Project created by QtCreator 2018-07-25T10:16:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 7z
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_showlist.cpp \
    threadgetsize.cpp \
    mythread.cpp

HEADERS  += mainwindow.h \
    CompExtrAPI.h \
    dialog_showlist.h \
    threadgetsize.h \
    mythread.h \



FORMS    += mainwindow.ui \
    dialog_showlist.ui

LIBS += -LD:\QtProject\7z\7z -lmy7z

LIBS += -LD:\QtProject\7z\7z -lUser32

LIBS += -LD:\QtProject\7z\7z -lOleAut32


