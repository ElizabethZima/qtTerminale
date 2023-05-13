
#include "withdrawwindow.hpp"

WithdrawWindow::WithdrawWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::WithdrawWindow)
{
    ui->setupUi(this);
}
void WithdrawWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

WithdrawWindow::~WithdrawWindow()
{
    delete ui;
}

//void WithdrawWindow::on_WithdrawButton_clicked() {
//
//}
