#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QTimer>
#include "mcculdaq.h"

class Capot : public QObject
{
    Q_OBJECT
public:
    explicit Capot(MccUldaq &_laCarte, const int _numDio, QObject *parent = nullptr);
    void onTimerCapot_timeout();
private:
    MccUldaq &laCarte;
    bool etatCapot;
    const int numDio;
    QTimer timerCapot;

signals:
    void EtatCapotChange();

};

#endif // CAPOT_H
