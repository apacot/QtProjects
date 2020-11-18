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

private:
    Ui::WidgetUSB2020 *ui;
};
#endif // WIDGETUSB2020_H
