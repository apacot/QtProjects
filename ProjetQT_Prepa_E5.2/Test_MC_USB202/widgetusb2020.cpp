#include "widgetusb2020.h"
#include "ui_widgetusb2020.h"
#include "mcculdaq.h"

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

void WidgetUSB2020::on_checkBox_DIO0_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO1_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO2_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO3_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO4_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO5_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO6_stateChanged(int arg1)
{

}

void WidgetUSB2020::on_checkBox_DIO7_stateChanged(int arg1)
{

}

