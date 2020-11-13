#ifndef DETECTEUR_H
#define DETECTEUR_H

#include <QDialog>

namespace Ui {
class Detecteur;
}

class Detecteur : public QDialog
{
    Q_OBJECT

public:
    explicit Detecteur(QWidget *parent = nullptr);
    ~Detecteur();

private:
    Ui::Detecteur *ui;
};

#endif // DETECTEUR_H
