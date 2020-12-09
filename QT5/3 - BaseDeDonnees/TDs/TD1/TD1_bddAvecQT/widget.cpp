#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("172.18.58.7");
    db.setDatabaseName("france2018");
    db.setUserName("snir");
    db.setPassword("snir");
    //ouverture de la base
    if(!db.open())
    {
        qDebug()<<"pb ouverture"<<db.lastError();
    }
    else
    {
        qDebug()<<"ouverture bdd ok";
    }

    //remplissage de la liste des régions
    QSqlQuery requete("select code, name from regions order by name;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    QString id;

    while(requete.next())
    {
        nom=requete.value("name").toString();
        id=requete.value("code").toString();
        ui->comboBoxRegions->addItem(nom,id);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonNomDept_clicked()
{
    QString numeroDepartement = ui->lineEditNumDept->text();
    // preparation de la requete

    QSqlQuery requete;
    requete.prepare("select name from departments where code =:nro ;");
    requete.bindValue(":nro",numeroDepartement);
    if(!requete.exec())
    {
        qDebug()<<"pb requete : "<<requete.lastError();
    }
    else
    {
        requete.next();
        ui->labelNomDept->setText(requete.value("name").toString()); //récuperer la valeur de la requête et la convertir en texte
    }


}

void Widget::on_comboBoxRegions_currentIndexChanged(int index)
{
        // recupere l'id de la region
        QString idRegion=ui->comboBoxRegions->itemData(index).toString();
        // vider la liste des departements
        ui->comboBoxDepartements->clear();
        ui->comboBoxDepartements->addItem("Choisissez un département");
        QSqlQuery requete;
        requete.prepare("select code,name from departments where region_code = :nro ");
        requete.bindValue(":nro",idRegion);
        if(!requete.exec())
        {
            qDebug()<<"pb requete : "<<requete.lastError();
        }
        else
        {
            while(requete.next())
            {
                ui->comboBoxDepartements->addItem(requete.value("name").toString(),requete.value("code").toInt());
            }
        }
}

void Widget::on_comboBoxDepartements_currentIndexChanged(int index)
{
    //recuperer l'id du département
    QString idDepartement = ui->comboBoxDepartements->itemData(index).toString();
    //vider la liste des villes
    ui->comboBoxVilles->clear();
    ui->comboBoxVilles->addItem("Choisissez une ville");
    QSqlQuery requete;
    requete.prepare("select id,name from cities where department_code = :nro");
    requete.bindValue(":nro",idDepartement);
    if(!requete.exec())
    {
        qDebug()<<"pb requete : "<<requete.lastError();
    }
    else
    {
        while(requete.next())
        {
            ui->comboBoxVilles->addItem(requete.value("name").toString(),requete.value("id").toString());
        }
    }
}
