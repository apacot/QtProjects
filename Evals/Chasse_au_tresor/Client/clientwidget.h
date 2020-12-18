/**
  @file clientwidget.h
  @brief Déclaration de la classe clientwidget
  @author Antoine PACOT
  @date 18/12/2020
  */


#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QToolButton>
#include <QTcpSocket>
#include <QHostAddress>
#include <QChar>
#include <QBuffer>
#include <QPoint>
#include <QDebug>

#define TAILLE 20

QT_BEGIN_NAMESPACE
namespace Ui { class clientWidget; }
QT_END_NAMESPACE

class clientWidget : public QWidget
{
    Q_OBJECT

public:
    clientWidget(QWidget *parent = nullptr);
    ~clientWidget();
    void EnvoyerCommande(QChar commande);

private slots:
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);

    void on_pushButtonConnexion_clicked();

    void on_pushButtonUp_clicked();

    void on_pushButtonLeft_clicked();

    void on_pushButtonDown_clicked();

    void on_pushButtonRight_clicked();

private:
    Ui::clientWidget *ui;
    QGridLayout *grille;
    QTcpSocket *socClientTresor;
};
#endif // CLIENTWIDGET_H
