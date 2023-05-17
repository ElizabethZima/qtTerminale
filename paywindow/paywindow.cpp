
#include "paywindow.hpp"


PayWindow::PayWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::PayWindow)
{
    ui->setupUi(this);

    mWindow = new MobileWindow();
    connect(mWindow, &MobileWindow::payWindow, this, &PayWindow::show);
}

void PayWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

PayWindow::~PayWindow()
{
    delete ui;
}

void PayWindow::on_billButton_clicked() {

}

void PayWindow::on_mobileButton_clicked() {
    mWindow->show();
    this->close();
}


