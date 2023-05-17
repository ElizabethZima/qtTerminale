//
// Created by eliza on 17.05.2023.
//

#include "mobilewindow.hpp"

void MobileWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit payWindow(); // И вызываем сигнал на открытие главного окна
}

MobileWindow::MobileWindow(QWidget *parent):
QMainWindow(parent),
ui(new Ui::MobileWindow) {
    ui->setupUi(this);

    yesWindow = new YesWindow();
    connect(yesWindow, &YesWindow::withdrawWindow, this, &::MobileWindow::show);
}

MobileWindow::~MobileWindow()
{
    delete ui;
}



void MobileWindow::on_okButton_clicked() {

    int money = ui->lineEdit2->text().toInt();

    if( money <= currency) {
        currency -= money;
      //  yesWindow->showw(currency);
    }
//    else{
//        noWindow->showw(currency);
//    }
    ui->lineEdit->clear();
    ui->lineEdit2->clear();


}
