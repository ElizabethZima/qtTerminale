#ifndef UNTITLED13_PAYWINDOW_HPP
#define UNTITLED13_PAYWINDOW_HPP
#include <../ui_paywindow.h>
#include "../paywindow/paywindow.hpp"
#include "../mobilewindow/mobilewindow.hpp"
#include "../billwindow/billwindow.hpp"
#include <QMainWindow>
#include <QtWidgets/QLineEdit>
extern int currency;


namespace Ui {
    class PayWindow;
}

class PayWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit PayWindow(QWidget *parent = nullptr);
    ~PayWindow();



signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки

    void on_billButton_clicked();
    void on_mobileButton_clicked();
    void on_ExitButton_clicked();

private:
    Ui::PayWindow *ui{};

    MobileWindow *mWindow;
    BillWindow *billWindow;
};


#endif //UNTITLED13_PAYWINDOW_HPP
