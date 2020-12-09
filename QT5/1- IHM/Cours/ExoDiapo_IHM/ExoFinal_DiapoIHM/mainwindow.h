#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_WindowsCheckBox_clicked(bool checked);

    void on_OSXCheckBox_clicked(bool checked);

    void on_LinuxCheckBox_clicked(bool checked);

    void on_WindowsRadioButton_clicked(bool checked);

    void on_OSXRadioButton_clicked(bool checked);

    void on_LinuxRadioButton_clicked(bool checked);

    void on_LinuxButton_clicked();

    void on_WindowsButton_clicked();

    void on_OSXButton_clicked();

    void on_MenuC_triggered();

    void on_MenuJava_triggered();

    void on_MenuCPP_triggered();

    void on_MenuPHP_triggered();

    void on_MenuJS_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
