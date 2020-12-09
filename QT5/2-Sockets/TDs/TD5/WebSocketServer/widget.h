#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWebSocketServer>
#include <QTimer>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void onQebSocketServer_newConnection();
    void onQWebSocket_textMessageReceived(QString texte);
    void onQtimer_majDate();

private:
    Ui::Widget *ui;
    QWebSocketServer *sock;
    QWebSocket *client;
    QTimer majDate;

};
#endif // WIDGET_H
