#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServer_newConnection()
{

}

void ServeurWidget::onQTcpSocket_readyRead()
{

}

void ServeurWidget::onQTcpSocket_disconnected()
{

}


void ServeurWidget::on_pushButtonLancerServeur_clicked()
{

}
