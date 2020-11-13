#include "detecteurtemporise.h"

DetecteurTemporise::DetecteurTemporise()
{
    connect(&timerButton,&QTimer::timeout,this,&DetecteurTemporise::onTimerButton_timeout);
}

DetecteurTemporise::~DetecteurTemporise()
{

}

void DetecteurTemporise::on_pushButtonIntrus_clicked()
{
    timerButton.start(3000);

}

void DetecteurTemporise::onTimerButton_timeout()
{
    QMessageBox messageIntrus;
    messageIntrus.setText("un intrus a été détecté");
    messageIntrus.exec();
    timerButton.stop();
}
