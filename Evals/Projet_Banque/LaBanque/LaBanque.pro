TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        comptebancaire.cpp \
        compteclient.cpp \
        compteepargne.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    comptebancaire.h \
    compteclient.h \
    compteepargne.h \
    menu.h

DISTFILES += \
    ../build-LaBanque-Desktop_Qt_5_15_0_GCC_64bit-Debug/client.txt \
    ../build-LaBanque-Desktop_Qt_5_15_0_GCC_64bit-Debug/compteBancaire.txt \
    ../build-LaBanque-Desktop_Qt_5_15_0_GCC_64bit-Debug/compteEpargne.txt
