#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QMessageBox>
#include <QTimer>
#include "porte.h"

QT_BEGIN_NAMESPACE
namespace Ui { class digicode; }
QT_END_NAMESPACE

class digicode : public QWidget
{
    Q_OBJECT

public:
    digicode(QWidget *parent = nullptr);
    ~digicode();

private slots:
    void onQPushButtonClicked();
    void onTimerTempoGache_timeout();
    void onTimerTempoVerrouillage_timeout();

private:
    Ui::digicode *ui;
    QString code;
    QString codeSecret = "1234";
    QPushButton *touches[4][3];
    QLineEdit *afficheur;
    QGridLayout *grille;
    Porte laPorte;
    QTimer tempoGache;
    QTimer tempoVerrouillage;
    int nbErreur = 0;
};
#endif // DIGICODE_H
