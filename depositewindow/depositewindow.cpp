#include "depositewindow.hpp"

DepositeWindow::DepositeWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::DepositeWindow)
{
    ui->setupUi(this);

    yesWindow = new YesWindow();
    //connect(yesWindow, &YesWindow::withdrawWindow, this, &DepositeWindow::show);
}

DepositeWindow::~DepositeWindow()
{
    delete ui;
}

void DepositeWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}



void DepositeWindow::on_okButton_clicked() {
    int money = ui->lineEdit->text().toInt();
    currency += money;
    yesWindow->showw(currency);
    ui->lineEdit->clear();
   // this->close();

}

