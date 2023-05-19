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
    noWindow = new NoWindow();
//    connect(yesWindow, &YesWindow::mobileWindow, this, &::MobileWindow::show);
//connect(noWindow, &NoWindow::mobileWindow, this, &::MobileWindow::show);

QString telRange = "[0-9]{10}";
    QRegExp telRegex(telRange + "$");
    QRegExpValidator *telValidator = new QRegExpValidator(telRegex, this);
    /* Устанавливаем Валидатор на QLineEdit */
    ui->lineEdit->setValidator(telValidator);



}

MobileWindow::~MobileWindow()
{
    delete ui;
}



void MobileWindow::on_okButton_clicked() {

    int money = ui->lineEdit2->text().toInt();



    if( money <=  currency ) {
        currency -= money;
        yesWindow->showw(currency);
    }
    else{
        noWindow->showw(currency);
    }
    ui->lineEdit->clear();
    ui->lineEdit2->clear();
}
