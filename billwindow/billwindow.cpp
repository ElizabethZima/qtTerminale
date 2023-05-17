#include "billwindow.hpp"


void BillWindow::on_ExitButton_clicked() {
    this->close();      // Закрываем окно
    emit payWindow(); // И вызываем сигнал на открытие главного окна
}

BillWindow::BillWindow(QWidget *parent):
        QMainWindow(parent),
        ui(new Ui::BillWindow) {
    ui->setupUi(this);

    yesWindow = new YesWindow();
    noWindow = new NoWindow();
//    connect(yesWindow, &YesWindow::mobileWindow, this, &::MobileWindow::show);
//connect(noWindow, &NoWindow::mobileWindow, this, &::MobileWindow::show);
}

BillWindow::~BillWindow()
{
    delete ui;
}



void BillWindow::on_okButton_clicked() {

    int money = ui->lineEdit_2->text().toInt();

    if( money <= currency) {
        currency -= money;
        yesWindow->showw(currency);
    }
    else{
        noWindow->showw(currency);
    }
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
}