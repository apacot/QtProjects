#ifndef WIDGETUSB2020_H
#define WIDGETUSB2020_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetUSB2020; }
QT_END_NAMESPACE

class WidgetUSB2020 : public QWidget
{
    Q_OBJECT

public:
    WidgetUSB2020(QWidget *parent = nullptr);
    ~WidgetUSB2020();

private slots:
    void on_checkBox_DIO0_stateChanged(int arg1);
    void on_checkBox_DIO1_stateChanged(int arg1);
    void on_checkBox_DIO2_stateChanged(int arg1);
    void on_checkBox_DIO3_stateChanged(int arg1);
    void on_checkBox_DIO4_stateChanged(int arg1);
    void on_checkBox_DIO5_stateChanged(int arg1);
    void on_checkBox_DIO6_stateChanged(int arg1);
    void on_checkBox_DIO7_stateChanged(int arg1);

private:
    Ui::WidgetUSB2020 *ui;
};
#endif // WIDGETUSB2020_H
