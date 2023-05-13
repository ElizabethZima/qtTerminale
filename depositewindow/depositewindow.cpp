#include "depositewindow.hpp"

DepositeWindow::DepositeWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::DepositeWindow)
{
    ui->setupUi(this);
}

DepositeWindow::~DepositeWindow()
{
    delete ui;
}

void DepositeWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

double DepositeWindow::getMoney() {
    return ui->lineEdit->text().toInt();
}

