
#include "withdrawwindow.hpp"
#include "../noyeswindow/YesWindow.hpp"

extern int currency;
#include <iostream>

WithdrawWindow::WithdrawWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::WithdrawWindow)
{
    ui->setupUi(this);
    yesWindow = new YesWindow();
    noWindow = new NoWindow();

    connect(noWindow, &NoWindow::withdrawWindow, this, &WithdrawWindow::show);
    connect(yesWindow, &YesWindow::withdrawWindow, this, &WithdrawWindow::show);
}
void WithdrawWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

WithdrawWindow::~WithdrawWindow()
{
    delete ui;
}

void WithdrawWindow::on_WithdrawButton_clicked() {

    int money = ui->lineEdit->text().toInt();

    if( money <= currency) {
        currency -= money;
        yesWindow->showw(currency);
    }
    else{
        noWindow->showw(currency);
    }
    ui->lineEdit->clear();

    this->close();

}
