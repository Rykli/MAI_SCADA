#-------------------------------------------------
#
# Project created by QtCreator 2011-12-22T17:40:15
#
#-------------------------------------------------

QT       += core gui

TARGET = project
TEMPLATE = app


SOURCES += \
    ../Viewer/src/shape.cpp \
    ../Viewer/src/numberbox.cpp \
    ../Viewer/src/mainwindow.cpp \
    ../Viewer/src/main.cpp \
    ../Viewer/src/Line.cpp \
    ../VarBase/src/basecode.cpp \
    ../Viewer/src/Elements.cpp

HEADERS  += \
    ../Viewer/include/shape.h \
    ../Viewer/include/numberbox.h \
    ../Viewer/include/mainwindow.h \
    ../Viewer/include/Line.h \
    ../VarBase/include/basecode.h \
    ../Viewer/include/Elements.h

FORMS    +=

OTHER_FILES += \
    varbase.xml \
    ../project-build-desktop/varbase.xml \
    ../project-build-desktop/elements.xml
