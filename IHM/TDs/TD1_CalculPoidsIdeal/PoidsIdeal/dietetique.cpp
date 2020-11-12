#include "dietetique.h"
#include "ui_dietetique.h"

Dietetique::Dietetique(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Dietetique)
{
    ui->setupUi(this);
}

Dietetique::~Dietetique()
{
    delete ui;
}

