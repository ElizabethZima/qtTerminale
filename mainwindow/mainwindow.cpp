#include "mainwindow.hpp"
#include <QRegExpValidator>
extern int currency;

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText("Balance " + QString::number(currency));

    if(currency < 100) ui->WithdrawButton->setEnabled(false);
    if(currency < 50) ui->PayButton->setEnabled(false);

    // Инициализируем окна
    sWindow = new DepositeWindow();
    tWindow = new WithdrawWindow();
    fWindow = new PayWindow();

    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(sWindow, &DepositeWindow::firstWindow, this, &MainWindow::showfunc);
    connect(tWindow, &WithdrawWindow::firstWindow, this, &MainWindow::showfunc);
    connect(fWindow, &PayWindow::firstWindow, this, &::MainWindow::showfunc);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_DepositeButton_clicked() {
    sWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_EndButton_clicked() {
    exit(0);
}

void MainWindow::on_WithdrawButton_clicked() {
    tWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

void MainWindow::on_PayButton_clicked() {
    fWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}

void MainWindow::showfunc() {
    this->show();
    ui->label->setText("Balance " + QString::number(currency));

    if(currency < 100) ui->WithdrawButton->setEnabled(false);
    if(currency < 50) ui->PayButton->setEnabled(false);


}
