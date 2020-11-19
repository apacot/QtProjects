#include "capot.h"

Capot::Capot(const MccUldaq & _laCarte, const int _numDio, QObject *parent):
    QObject(parent),
    laCarte(_laCarte),
    numDio(_numDio)
{
    connect(&timerCapot,&QTimer::timeout,this,&Capot::onTimerCapot_timeout);
}

void Capot::onTimerCapot_timeout()
{

}
