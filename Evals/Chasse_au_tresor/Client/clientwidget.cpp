/**
  @file clientwidget.cpp
  @brief implémentation de la classe clientwidget
  @author Antoine PACOT
  @date 18/12/2020
  */

#include "clientwidget.h"
#include "ui_clientwidget.h"

/**
 * @brief clientWidget::clientWidget
 * @details a la création du client, la grille est créée et les éléments sont placés
 * @param parent
 * @author Antoine PACOT
 */
clientWidget::clientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::clientWidget)
{
    ui->setupUi(this);
    grille = new QGridLayout(this);
    socClientTresor = new QTcpSocket();

    //association des signaux/slots
    connect(socClientTresor,&QTcpSocket::connected,this,&clientWidget::onQTcpSocket_connected);
    connect(socClientTresor,&QTcpSocket::disconnected,this,&clientWidget::onQTcpSocket_disconnected);
    connect(socClientTresor,&QTcpSocket::readyRead,this,&clientWidget::onQTcpSocket_readyRead);
    connect(socClientTresor,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,&clientWidget::onQTcpSocket_error);

    for(int ligne=0; ligne<TAILLE; ligne++)
    {
        for (int colonne=0; colonne<TAILLE; colonne++)
        {
            QToolButton *b = new QToolButton();
            grille->addWidget(b,ligne,colonne,1,1);
        }
    }
    // Placement sur la grille des objets présents sur ui
    // les labels
    grille->addWidget(ui->labelAdresseServeur,TAILLE,0,1,5);
    grille->addWidget(ui->labelNumeroPort,TAILLE,6,1,5);
    grille->addWidget(ui->labelDistance,TAILLE+3,0,1,5);
    grille->addWidget(ui->labelInformations,TAILLE+3,12,1,5);
    // les QLineEdit adresse et port
    grille->addWidget(ui->lineEditAdresseServeur,TAILLE+1,0,1,5);
    grille->addWidget(ui->spinBoxPortServeur,TAILLE+1,6,1,5);
    // les QPushButton connexion et quitter
    grille->addWidget(ui->pushButtonConnexion,TAILLE+2,0,1,5);
    grille->addWidget(ui->pushButtonQuitter,TAILLE+2,6,1,5);
    // les QPushButton fleches
    grille->addWidget(ui->pushButtonUp,TAILLE,15,1,1);
    grille->addWidget(ui->pushButtonLeft,TAILLE+1,14,1,1);
    grille->addWidget(ui->pushButtonRight,TAILLE+1,16,1,1);
    grille->addWidget(ui->pushButtonDown,TAILLE+2,15,1,1);
    //distance et informations
    grille->addWidget(ui->lcdNumberDistance,TAILLE+3,6,1,5);
    this->setLayout(grille);

    //flèches de commande désactivées par défaut
    ui->pushButtonUp->hide();
    ui->pushButtonDown->hide();
    ui->pushButtonRight->hide();
    ui->pushButtonLeft->hide();

}
/**
 * @brief clientWidget::~clientWidget
 * @details Destructeur de la classe client
 * @author Antoine PACOT
 */
clientWidget::~clientWidget()
{
    delete ui;
    delete socClientTresor;
    delete grille;
}
/**
 * @brief clientWidget::EnvoyerCommande
 * @details Envoi la commande au serveur (le choix de la flèche)
 * @param commande
 * @author Antoine PACOT
 */
void clientWidget::EnvoyerCommande(QChar commande)
{
    quint16 taille = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);

    //association du tampon au flux de sortie
    QDataStream out(&tampon);

    //construction de la trame
    out<<taille<<commande;

    //calcul de la taille de la trame
    taille=tampon.size()-sizeof(taille);

    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);

    //modification de la trame avec la taille réelle de la trame
    out<<taille;

    //envoi de la trame via la socket
    socClientTresor->write(tampon.buffer());

    qDebug() << this << "Envoyer de la commande" << commande;
}
/**
 * @brief clientWidget::onQTcpSocket_connected
 * @details Ce qui se passe quand la connexion est effectuée
 * @author Antoine PACOT
 */
void clientWidget::onQTcpSocket_connected()
{
    //Activation des flèches de commande
    ui->pushButtonUp->show();
    ui->pushButtonDown->show();
    ui->pushButtonRight->show();
    ui->pushButtonLeft->show();
    ui->pushButtonConnexion->setText("Déconnexion");
    qDebug() << this << "Connecté au serveur";
}
/**
 * @brief clientWidget::onQTcpSocket_disconnected
 * @details ce qui se passe lorsqu'on est déconnecté du serveur
 * @author Antoine PACOT
 */
void clientWidget::onQTcpSocket_disconnected()
{
    //Désactivation des flèches de commande
    ui->pushButtonUp->hide();
    ui->pushButtonDown->hide();
    ui->pushButtonRight->hide();
    ui->pushButtonLeft->hide();
    ui->pushButtonConnexion->setText("Connexion");
    qDebug() << this << "Déconnecté du serveur";
}
/**
 * @brief clientWidget::onQTcpSocket_readyRead
 * @details Ce qui se passe lorsque des données sont disponibles
 * @author Antoine PACOT
 */
void clientWidget::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message = "";
    QPoint pos;
    double distance;
    int x = 0;
    int y = 0;

    //si le nombre d'octets reçu est au moins ega à celui de la taille de ce que l'on doit recevoir
    if(socClientTresor->bytesAvailable() >= (qint64)sizeof(taille));
    {
        //association de la socket au flux d'entree
        QDataStream in(socClientTresor);
        //extraire la taille de ce que l'on doit recevoir
        in >> taille;
        if(socClientTresor->bytesAvailable() >= (qint64)taille)
        {
            in >> pos >> message >> distance;
        }

        x = pos.x();
        y = pos.y();
        int xPrec = x;
        int yPrec = y;
        if(y == -1 && x == -1)
        {
            socClientTresor->close();
        }
        else
        {
            for(int ligne=0; ligne<TAILLE; ligne++)
            {
                for (int colonne=0; colonne<TAILLE; colonne++)
                {
                    grille->itemAtPosition(ligne,colonne)->widget()->setStyleSheet("background-color : white");
                }
            }
            grille->itemAtPosition(y,x)->widget()->setStyleSheet("background-color : black");
        }
        qDebug() << "message : " << message;
        qDebug() << "position reçu : " << x <<y;
        ui->lcdNumberDistance->display(distance);
        qDebug() << this;
    }
    x = pos.x();
    y = pos.y();

    ui->labelInformations->setText(message);
}
/**
 * @brief clientWidget::onQTcpSocket_error
 * @param socketError
 * @author Antoine PACOT
 */
void clientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->labelInformations->setText(socClientTresor->errorString());
    qDebug() << this << "Erreur :" << socClientTresor->errorString();
}

void clientWidget::on_pushButtonConnexion_clicked()
{
    if(ui->pushButtonConnexion->text() == "Connexion")
    {
        QHostAddress adresse(ui->lineEditAdresseServeur->text());
        socClientTresor->connectToHost(adresse,ui->spinBoxPortServeur->value());
    }
    else
    {
        socClientTresor->disconnectFromHost();
    }
    qDebug() << this << "Appui sur le bouton connexion";
}

void clientWidget::on_pushButtonUp_clicked()
{
    EnvoyerCommande('U');
    qDebug() << this << "Appui sur le bouton haut";
}

void clientWidget::on_pushButtonLeft_clicked()
{
    EnvoyerCommande('L');
    qDebug() << this << "Appui sur le bouton gauche";
}

void clientWidget::on_pushButtonDown_clicked()
{
    EnvoyerCommande('D');
    qDebug() << this << "Appui sur le bouton bas";
}

void clientWidget::on_pushButtonRight_clicked()
{
    EnvoyerCommande('R');
    qDebug() << this << "Appui sur le bouton droit";
}
