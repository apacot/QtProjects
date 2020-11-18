#include "widgetusb2020.h"
#include "ui_widgetusb2020.h"

WidgetUSB2020::WidgetUSB2020(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::WidgetUSB2020)
{
    ui->setupUi(this);
}

WidgetUSB2020::~WidgetUSB2020()
{
    delete ui;
}

