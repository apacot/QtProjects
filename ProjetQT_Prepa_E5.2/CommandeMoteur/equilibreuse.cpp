#include "equilibreuse.h"
#include "ui_equilibreuse.h"

Equilibreuse::Equilibreuse(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Equilibreuse)
{
    ui->setupUi(this);
    leCapot = new Capot(laCarte,0,this); //0 pour DIO0
    connect(leCapot,&Capot::EtatCapotChange,this,&Equilibreuse::onCapot_EtatCapotChange);
    ui->statusbar->addPermanentWidget(&labelEtatCapot);
    leMoteur = new Moteur(laCarte,0);
}

Equilibreuse::~Equilibreuse()
{
    delete ui;
    delete leCapot;
}

void Equilibreuse::onCapot_EtatCapotChange(bool EtatCapotChange)
{
    QPalette palette;
        labelEtatCapot.setAutoFillBackground(true);
        if(EtatCapotChange)
        {
            palette.setColor(QPalette::WindowText,Qt::black);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot fermé |");
        }
        else
        {
            palette.setColor(QPalette::WindowText,Qt::red);
            labelEtatCapot.setPalette(palette);
            labelEtatCapot.setText("| Capot ouvert |");
        }
}


void Equilibreuse::on_pushButton_Arreter_clicked()
{

}

void Equilibreuse::on_pushButton_Lancer_clicked()
{

}
