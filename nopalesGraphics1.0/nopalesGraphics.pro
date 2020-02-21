#-------------------------------------------------
#
# Project created by QtCreator 2020-02-08T14:21:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = nopalesGraphics
TEMPLATE = app



# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    nopalesgraphics.cpp \
    view1widget.cpp \
    view2widget.cpp \
    view3widget.cpp \
    view4widget.cpp \
    object.cpp \
    camera.cpp \
    views.cpp

HEADERS += \
        nopalesgraphics.h \
       view1widget.h \
       view2widget.h \
       view3widget.h \
       view4widget.h \
    object.h \
    camera.h \
    views.h

FORMS += \
        nopalesgraphics.ui \
    example.ui

LIBS += -L/usr/local/lib -lGLU

DISTFILES += \
    cursor.png \
    cursor.jpg

RESOURCES += \
    images.qrc


