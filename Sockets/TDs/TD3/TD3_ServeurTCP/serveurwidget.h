#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class ServeurWidget; }
QT_END_NAMESPACE

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private slots:
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutput();

    void on_pushButtonLancerServeur_clicked();

private:
    Ui::ServeurWidget *ui;
    QTcpSocket *socDialClient;
    QTcpServer *socEcouteServ;
    QProcess *process;
};
#endif // SERVEURWIDGET_H
