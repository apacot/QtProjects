#include "ihmtest_ui.h"
#include "ui_ihmtest_ui.h"

IhmTest_UI::IhmTest_UI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IhmTest_UI)
{
    ui->setupUi(this);
}

IhmTest_UI::~IhmTest_UI()
{
    delete ui;
}

void IhmTest_UI::on_pushButton_2_clicked()
{
    ui->pushButton->setText("Coucou");
    QString texte;
    texte=ui->pushButton_2->text();
    ui->label->setText(texte);
}
