#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);
    socClientBanque = new QTcpSocket();
    connect(socClientBanque,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),
            this,&DAB_MainWindow::onQTcpSocket_error);
    connect(socClientBanque,&QTcpSocket::connected,this,&DAB_MainWindow::onQTcpSocket_connected);
    connect(socClientBanque,&QTcpSocket::disconnected,this,&DAB_MainWindow::onQTcpSocket_disconnected);
    connect(socClientBanque,&QTcpSocket::stateChanged,this,&DAB_MainWindow::onQTcpSocket_stateChanged);
    connect(socClientBanque,&QTcpSocket::readyRead,this,&DAB_MainWindow::onQTcpSocket_readyRead);
    //cocher le radiobouton solde par défaut
    ui->radioButtonSolde->setChecked(true);
}

DAB_MainWindow::~DAB_MainWindow()
{
    delete ui;
    delete socClientBanque;
}


void DAB_MainWindow::on_PushButtonConnexion_clicked()
{
    if(ui->PushButtonConnexion->text() == "Connexion")
    {
        QHostAddress adresse(ui->lineEditIP->text());
        socClientBanque->connectToHost(adresse,ui->lineEditPort->text().toUInt());
    }
    else
    {
        socClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::onQTcpSocket_connected()
{
    //activation des opérations
    ui->pushButtonEnvoi->setEnabled(true);
    ui->pushButtonNumCompte->setEnabled(true);
    ui->lineEditMessageBanque->setEnabled(true);
    ui->radioButtonDepot->setEnabled(true);
    ui->radioButtonSolde->setEnabled(true);
    ui->radioButtonRetrait->setEnabled(true);
    ui->lineEditMessageBanque->setEnabled(true);
    ui->lineEditNumCompte->setEnabled(true);
    ui->lineEditMontant->setEnabled(true);
    ui->PushButtonConnexion->setText("Déconnexion");
}

void DAB_MainWindow::onQTcpSocket_disconnected()
{
    //Désactivation des opérations par sécurité
    ui->pushButtonEnvoi->setEnabled(false);
    ui->pushButtonNumCompte->setEnabled(false);
    ui->lineEditMessageBanque->setEnabled(false);
    ui->lineEditMessageBanque->setEnabled(false);
    ui->radioButtonDepot->setEnabled(false);
    ui->radioButtonSolde->setEnabled(false);
    ui->radioButtonRetrait->setEnabled(false);
    ui->lineEditMontant->setEnabled(false);
    ui->lineEditNumCompte->setEnabled(false);
    ui->PushButtonConnexion->setText("Connexion");
}

void DAB_MainWindow::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->listWidgetEtatConnexion->addItem(socClientBanque->errorString());
}

void DAB_MainWindow::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState)
{
    QString message;
    switch(socketState)
    {
    case QAbstractSocket::UnconnectedState:
        message = "Non connecté";
        break;
    case QAbstractSocket::HostLookupState:
        message = "Recherche d'un hôte";
        break;
    case QAbstractSocket::ConnectingState:
        message = "Connexion en cours";
        break;
    case QAbstractSocket::ConnectedState:
        message = "Connexion établie";
        break;
    case QAbstractSocket::BoundState:
        message = "La socket est liée a l'adresse ip et le port";
        break;
    case QAbstractSocket::ClosingState:
        message = "Fermeture de la connexion";
        break;
    case QAbstractSocket::ListeningState:
        message = "Usage interne uniquement";
        break;
    }
    ui->listWidgetEtatConnexion->addItem(message);

}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille=0;
    QString message;

    //si le nombre d'octets reçu est au moins ega à celui de la taille de ce que l'on doit recevoir
    if(socClientBanque->bytesAvailable() >= (qint64)sizeof(taille));
    {
        //association de la socket au flux d'entree
        QDataStream in(socClientBanque);

        //extraire la taille de ce que l'on doit recevoir
        in >> taille;

        //si le nombre d'octets reçu est au moins egal a celui de ce que l'on doit recevoir
        if(socClientBanque->bytesAvailable() >= (qint64)taille)
        {
            // extraire le message de la banque et le mettre dans message
            in >> message;
        }
    }
    ui->lineEditMessageBanque->setText(message);
}

void DAB_MainWindow::on_pushButtonEnvoi_clicked()
{
    if(ui->radioButtonDepot->isChecked())
    {
        quint16 taille=0;
        QChar commande='D';
        float montant = ui->lineEditMontant->text().toFloat();
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);

        //association du tampon au flux de sortie
        QDataStream out(&tampon);

        //construction de la trame
        out<<taille<<commande<<montant;

        //calcul de la taille de la trame
        taille=tampon.size()-sizeof(taille);

        //placement sur la premiere position du flux pour pouvoir modifier la taille
        tampon.seek(0);

        //modification de la trame avec la taille réelle de la trame
        out<<taille;

        //envoi du QByteArray du tampon via la socket
        if(montant > 0 )
        {
            socClientBanque->write(tampon.buffer());
        }
    }
    if(ui->radioButtonRetrait->isChecked())
    {
        quint16 taille=0;
        QChar commande='R';
        float montant = ui->lineEditMontant->text().toFloat();
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);

        //association du tampon au flux de sortie
        QDataStream out(&tampon);

        //construction de la trame
        out<<taille<<commande<<montant;

        //calcul de la taille de la trame
        taille=tampon.size()-sizeof(taille);

        //placement sur la premiere position du flux pour pouvoir modifier la taille
        tampon.seek(0);

        //modification de la trame avec la taille réelle de la trame
        out<<taille;

        //envoi du QByteArray du tampon via la socket
        if(montant > 0 )
        {
            socClientBanque->write(tampon.buffer());
        }
    }
    if(ui->radioButtonSolde->isChecked())
    {
        quint16 taille=0;
        QChar commande='S';
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

        //envoi du QByteArray du tampon via la socket
        socClientBanque->write(tampon.buffer());
    }

}

void DAB_MainWindow::on_pushButtonNumCompte_clicked()
{
    quint16 taille=0;
    QChar commande='N';
    int compte = 1234; //num de compte automatiquement mis sur 1234
    //int compte = ui->lineEditNumCompte->text().toInt(); //Rentrer manuellement son num de compte
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);

    //association du tampon au flux de sortie
    QDataStream out(&tampon);

    //construction de la trame
    out<<taille<<commande<<compte;

    //calcul de la taille de la trame
    taille=tampon.size()-sizeof(taille);

    //placement sur la premiere position du flux pour pouvoir modifier la taille
    tampon.seek(0);

    //modification de la trame avec la taille réelle de la trame
    out<<taille;

    //envoi du QByteArray du tampon via la socket
    if(compte > 0 )
    {
        socClientBanque->write(tampon.buffer());
    }
}
