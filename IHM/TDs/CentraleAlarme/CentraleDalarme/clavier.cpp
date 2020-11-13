#include "clavier.h"
#include "ui_clavier.h"

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Clavier)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    //connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
}

Clavier::~Clavier()
{
    delete ui;
}


void Clavier::on_pushButton_marche_clicked()
{
    //récuperer le contenu de la touche marche
    QString texteBouton = ui->pushButton_marche->text();
    // affichage d'un message lors de l'appuie sur la touche Marche
    QMessageBox messageMarche;
    messageMarche.setText("j'ai appuyé sur la touche " + texteBouton);
    messageMarche.exec();
    //ui->checkBoxLedRouge->setCheckState(Qt::Checked); //activation manuel de la "led rouge"
    timerLed.start(500);
}

void Clavier::on_pushButton_Arret_clicked()
{
    //récuperer le contenu de la touche Arret
    QString texteBouton = ui->pushButton_Arret->text();
    // affichage d'un message lors de l'appuie sur la touche Arret
    QMessageBox messageMarche;
    messageMarche.setText("j'ai appuyé sur la touche " + texteBouton);
    messageMarche.exec();
    //ui->checkBoxLedRouge->setCheckState(Qt::Unchecked); //desactivation manuel de la "led rouge"
    timerLed.stop();

}

void Clavier::TraiterChiffre()
{
    QPushButton *pbouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pbouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
    {
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    }
    else
    {
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
    }
}



void Clavier::on_pushButton_2_clicked()
{
    leDetecteur = new Detecteur;
    leDetecteur->show();
}

void Clavier::on_pushButton_3_clicked()
{
    leDetecteur->hide();
    delete [] leDetecteur;
}
