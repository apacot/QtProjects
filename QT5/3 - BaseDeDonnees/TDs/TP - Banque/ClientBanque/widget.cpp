#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->groupBoxInfos->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonConnexionBDD_clicked()
{
    bdd=QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName(ui->lineEditAdresseIP->text());
    bdd.setDatabaseName(ui->lineEditNomBdd->text());
    bdd.setUserName(ui->lineEditLogin->text());
    bdd.setPassword(ui->lineEditMDP->text());

    //ouverture de la base
    if(!bdd.open()) //echec de l'ouverture
    {
        QMessageBox msgError;
        msgError.setText("pb ouverture bdd " + bdd.lastError().text());
        msgError.exec();
    }
    else //ouverture ok
    {
        QMessageBox msg;
        msg.setText("Connecté à la base de données");
        msg.exec();
        ui->groupBoxConnexion->setEnabled(false);
        ui->groupBoxInfos->setEnabled(true);
    }
}

void Widget::on_pushButtonAfficheInfos_clicked()
{
    QSqlQuery requete("select solde, nom, prenom, idCompte from comptes;");
    if(!requete.exec())
    {
        QMessageBox msgError;
        msgError.setText("pb requete select " + requete.lastError().text());
        msgError.exec();
    }
    int ligne=0;    // numero de la ligne
    while(requete.next())
    {
        //ajouter une ligne au tableau
        ui->tableWidgetInfos->insertRow(ui->tableWidgetInfos->rowCount());
        int col=0;      // numero de la colonne
        //ajouter un nom
        QTableWidgetItem *nomItem = new QTableWidgetItem(requete.value("nom").toString());
        ui->tableWidgetInfos->setItem(ligne,col,nomItem);
        col++;
        //ajouter un prenom
        QTableWidgetItem *prenomItem = new QTableWidgetItem(requete.value("prenom").toString());
        ui->tableWidgetInfos->setItem(ligne,col,prenomItem);
        col++;
        //ajouter le numero de compte
        QTableWidgetItem *idCompteItem = new QTableWidgetItem(requete.value("idCompte").toString());
        ui->tableWidgetInfos->setItem(ligne,col,idCompteItem);
        col++;
        //ajouter le solde
        QTableWidgetItem *soldeItem = new QTableWidgetItem(requete.value("solde").toString());
        ui->tableWidgetInfos->setItem(ligne,col,soldeItem);
        ligne++;
    }
}
