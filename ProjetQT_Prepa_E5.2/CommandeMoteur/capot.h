#ifndef CAPOT_H
#define CAPOT_H

#include <QObject>
#include <QTimer>

class MccUldaq;

class Capot : public QObject
{
    Q_OBJECT
public:
    explicit Capot(const MccUldaq &_laCarte, const int _numDio, QObject *parent = nullptr);
    void onTimerCapot_timeout();
private:
    const MccUldaq &laCarte;
    bool etatCapot;
    int numDio;
    QTimer timerCapot;

signals:
    void EtatCapotChange();

};

#endif // CAPOT_H
