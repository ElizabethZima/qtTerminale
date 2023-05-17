//
// Created by eliza on 17.05.2023.
//

#include "nowindow.hpp"
NoWindow::NoWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::NoWindow)
{
    ui->setupUi(this);

}

NoWindow::~NoWindow()
{
    delete ui;
}

void NoWindow::on_ExitButton_clicked() {

    this->close();      // Закрываем окно
    emit withdrawWindow(); // И вызываем сигнал на открытие главного окна
}

void NoWindow::showw(int currency) {

    ui->balanceLabel->setText("Balance " + QString::number(currency));
    this->show();

}
