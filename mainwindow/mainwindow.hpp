#ifndef UNTITLED9_MAINWINDOW_HPP
#define UNTITLED9_MAINWINDOW_HPP
#include <../ui_mainwindow.h>
#include "../depositewindow/depositewindow.hpp"
#include "../withdrawwindow/withdrawwindow.hpp"
#include "../paywindow/paywindow.hpp"
#include <QMainWindow>
#include <QtWidgets/QLineEdit>



namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void showfunc();


private:
    Ui::MainWindow *ui;
    DepositeWindow *sWindow;
    WithdrawWindow *tWindow;
    PayWindow *fWindow;

private slots:
    void on_DepositeButton_clicked();
    void on_WithdrawButton_clicked();
    void on_PayButton_clicked();
    void on_EndButton_clicked();

};


#endif //UNTITLED9_MAINWINDOW_HPP