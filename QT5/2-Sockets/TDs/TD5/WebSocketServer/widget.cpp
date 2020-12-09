#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    sock = new QWebSocketServer("Serveur",QWebSocketServer::NonSecureMode);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQebSocketServer_newConnection()
{

}

void Widget::onQWebSocket_textMessageReceived(QString texte)
{

}

void Widget::onQtimer_majDate()
{

}

