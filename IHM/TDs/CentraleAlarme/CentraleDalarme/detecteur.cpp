#include "detecteur.h"
#include "ui_detecteur.h"

Detecteur::Detecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detecteur)
{
    ui->setupUi(this);
    this->setWindowTitle("Détecteur");
}

Detecteur::~Detecteur()
{
    delete ui;
}
