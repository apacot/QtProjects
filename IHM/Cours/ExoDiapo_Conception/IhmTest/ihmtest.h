#ifndef IHMTEST_H
#define IHMTEST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class IhmTest; }
QT_END_NAMESPACE

class IhmTest : public QMainWindow
{
    Q_OBJECT

public:
    IhmTest(QWidget *parent = nullptr);
    ~IhmTest();

private:
    Ui::IhmTest *ui;
};
#endif // IHMTEST_H
