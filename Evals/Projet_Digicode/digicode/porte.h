#ifndef PORTE_H
#define PORTE_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class Porte;
}

class Porte : public QWidget
{
    Q_OBJECT

public:
    explicit Porte(QWidget *parent = nullptr);
    ~Porte();
    void deverrouiller();
    void verrouiller();

private:
    Ui::Porte *ui;
    QPixmap *imagePorte[2];
};

#endif // PORTE_H
