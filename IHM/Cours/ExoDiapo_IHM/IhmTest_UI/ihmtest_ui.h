#ifndef IHMTEST_UI_H
#define IHMTEST_UI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class IhmTest_UI; }
QT_END_NAMESPACE

class IhmTest_UI : public QMainWindow
{
    Q_OBJECT

public:
    IhmTest_UI(QWidget *parent = nullptr);
    ~IhmTest_UI();

private slots:

    void on_pushButton_2_clicked();

private:
    Ui::IhmTest_UI *ui;
};
#endif // IHMTEST_UI_H
