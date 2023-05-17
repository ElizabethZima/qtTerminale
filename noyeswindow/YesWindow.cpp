#include "YesWindow.hpp"

YesWindow::YesWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::YesWindow)
{
    ui->setupUi(this);



}

YesWindow::~YesWindow()
{
    delete ui;
}

void YesWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit withdrawWindow(); // И вызываем сигнал на открытие главного окна
}

void YesWindow::showw(int currency) {

    ui->balanceLabel->setText("Balance " + QString::number(currency));
    this->show();

}
