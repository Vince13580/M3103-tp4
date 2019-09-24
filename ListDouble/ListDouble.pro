TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

QMAKE_MAC_SDK = macosx10.12

HEADERS += \
    crdtree.hpp \
    node.hpp \
    list.hpp
