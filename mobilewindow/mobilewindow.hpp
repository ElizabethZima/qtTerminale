//
// Created by eliza on 17.05.2023.
//

#ifndef UNTITLED13_MOBILEWINDOW_HPP
#define UNTITLED13_MOBILEWINDOW_HPP
#include <QRegExpValidator>

#include <../ui_mobilewindow.h>
#include "mobilewindow.hpp"
#include "../noyeswindow/YesWindow.hpp"
#include "../noyeswindow/nowindow.hpp"

#include <QMainWindow>
#include <QtWidgets/QLineEdit>
extern int currency;


namespace Ui {
    class MobileWindow;
}

class MobileWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit MobileWindow(QWidget *parent = nullptr);
    ~MobileWindow();



signals:
    void payWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_okButton_clicked();

    void on_ExitButton_clicked();

private:
    Ui::MobileWindow *ui{};
    YesWindow *yesWindow;
    NoWindow *noWindow;

};



#endif //UNTITLED13_MOBILEWINDOW_HPP
