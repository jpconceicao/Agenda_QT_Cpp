#-------------------------------------------------
#
# Project created by QtCreator 2022-08-02T13:14:55
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = agenda_cfv_v1-0
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        janelalogin.cpp \
    fm_principal.cpp \
    fm_novocontato.cpp \
    fm_pesquisacontatos.cpp

HEADERS  += janelalogin.h \
    fm_principal.h \
    fm_novocontato.h \
    fm_pesquisacontatos.h

FORMS    += janelalogin.ui \
    fm_principal.ui \
    fm_novocontato.ui \
    fm_pesquisacontatos.ui
