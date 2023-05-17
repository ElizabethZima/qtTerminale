#ifndef UNTITLED13_BILLWINDOW_HPP
#define UNTITLED13_BILLWINDOW_HPP


#include <../ui_billwindow.h>
#include "billwindow.hpp"
#include "../noyeswindow/YesWindow.hpp"
#include "../noyeswindow/nowindow.hpp"

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
extern int currency;


namespace Ui {
    class BillWindow;
}

class BillWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit BillWindow(QWidget *parent = nullptr);
    ~BillWindow();



signals:
    void payWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_okButton_clicked();

    void on_ExitButton_clicked();

private:
    Ui::BillWindow *ui{};
    YesWindow *yesWindow;
    NoWindow *noWindow;

};


#endif //UNTITLED13_BILLWINDOW_HPP
