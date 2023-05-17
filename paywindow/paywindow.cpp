
#include "paywindow.hpp"


PayWindow::PayWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::PayWindow)
{
    ui->setupUi(this);

    mWindow = new MobileWindow();
    billWindow = new BillWindow();
    connect(mWindow, &MobileWindow::payWindow, this, &PayWindow::show);
    connect(billWindow, &BillWindow::payWindow, this, &PayWindow::show);
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
    billWindow->show();
    this->close();
}

void PayWindow::on_mobileButton_clicked() {
    mWindow->show();
    this->close();
}


