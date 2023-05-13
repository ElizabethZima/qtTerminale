
#include "paywindow.hpp"


PayWindow::PayWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::PayWindow)
{
    ui->setupUi(this);
}

void PayWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

PayWindow::~PayWindow()
{
    delete ui;
}