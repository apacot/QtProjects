#include "capot.h"

Capot::Capot(MccUldaq & _laCarte, const int _numDio, QObject *parent):
    QObject(parent),
    laCarte(_laCarte),
    numDio(_numDio)
{
    connect(&timerCapot,&QTimer::timeout,this,&Capot::onTimerCapot_timeout);
    timerCapot.start(500);
    laCarte.ulDConfigBit(_numDio,DD_INPUT);
    laCarte.ulDBitIn(_numDio,etatCapot);
}

void Capot::onTimerCapot_timeout()
{
    bool etatCourant;
    laCarte.ulDBitIn(numDio,etatCourant);
}
