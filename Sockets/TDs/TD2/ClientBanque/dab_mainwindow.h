#ifndef DAB_MAINWINDOW_H
#define DAB_MAINWINDOW_H

#include <QMainWindow>
#include <QHostAddress>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class DAB_MainWindow; }
QT_END_NAMESPACE

class DAB_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:
    void on_PushButtonConnexion_clicked();

    void on_pushButtonEnvoi_clicked();

    void on_pushButtonNumCompte_clicked();

    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState);
    void onQTcpSocket_readyRead();

private:
    Ui::DAB_MainWindow *ui;
    QTcpSocket *socClientBanque;
};
#endif // DAB_MAINWINDOW_H
