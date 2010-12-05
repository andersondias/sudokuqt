#-------------------------------------------------
#
# Project created by QtCreator 2010-12-05T14:32:51
#
#-------------------------------------------------

QT       += core gui

TARGET = sudoku
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    celula.cpp \
    tabuleiro.cpp \
    importador_por_arquivo.cpp \
    helpers.cpp \
    grupo.cpp

HEADERS  += mainwindow.h \
    celula.h \
    grupo.h \
    tabuleiro.h \
    helpers.h \
    importador_por_arquivo.h \
    celulatextedit.h

FORMS    += mainwindow.ui

OTHER_FILES += \
    jogos
