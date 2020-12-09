#ifndef DIETETIQUE_H
#define DIETETIQUE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Dietetique; }
QT_END_NAMESPACE

class Dietetique : public QWidget
{
    Q_OBJECT

public:
    Dietetique(QWidget *parent = nullptr);
    ~Dietetique();

private:
    Ui::Dietetique *ui;
};
#endif // DIETETIQUE_H
