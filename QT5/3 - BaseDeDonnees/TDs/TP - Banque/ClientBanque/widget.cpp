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
    QSqlQuery requete;
    requete.prepare("select * from comptes;");
    if(!requete.exec())
    {
        QMessageBox msgError;
        msgError.setText("pb requete select " + bdd.lastError().text());
        msgError.exec();
    }
    else
    {
        while(requete.next())
        {
            ui->textEditInfos->append(requete.value("nom").toString());//récuperer la valeur de la requête et la convertir en texte
            ui->textEditInfos->append(requete.value("prenom").toString());//récuperer la valeur de la requête et la convertir en texte
            ui->textEditInfos->append(requete.value("idCompte").toString());//récuperer la valeur de la requête et la convertir en texte
            ui->textEditInfos->append(requete.value("solde").toString());//récuperer la valeur de la requête et la convertir en texte
        }
    }
}
