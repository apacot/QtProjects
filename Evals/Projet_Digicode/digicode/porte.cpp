#include "porte.h"
#include "ui_porte.h"

Porte::Porte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Porte)
{
    ui->setupUi(this);
    imagePorte[0] = new QPixmap(":/img/porte_ouverte.png");
    imagePorte[1] = new QPixmap(":/img/porte_fermee.png");
}

Porte::~Porte()
{
    delete ui;
}

void Porte::deverrouiller()
{
    ui->labelEtatPorte->setText("La porte est déverrouillée");
    ui->labelImagePorte->setPixmap(*imagePorte[0]);
}

void Porte::verrouiller()
{
    ui->labelEtatPorte->setText("La porte est verrouillée");
    ui->labelImagePorte->setPixmap(*imagePorte[1]);
}
