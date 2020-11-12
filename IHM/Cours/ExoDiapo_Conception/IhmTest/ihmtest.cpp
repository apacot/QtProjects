#include "ihmtest.h"
#include "ui_ihmtest.h"

IhmTest::IhmTest(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::IhmTest)
{
    ui->setupUi(this);
}

IhmTest::~IhmTest()
{
    delete ui;
}

