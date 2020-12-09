#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
    ~DetecteurTemporise();

private slots:
    virtual void on_pushButtonIntrus_clicked();
    void onTimerButton_timeout();

private:
    QTimer timerButton;

};

#endif // DETECTEURTEMPORISE_H
