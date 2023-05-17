#ifndef UNTITLED13_WITHDRAWWINDOW_HPP
#define UNTITLED13_WITHDRAWWINDOW_HPP

#include <../ui_withdrawwindow.h>
#include "../withdrawwindow/withdrawwindow.hpp"
#include "../noyeswindow/YesWindow.hpp"
#include "../noyeswindow/nowindow.hpp"

#include <QMainWindow>
#include <QtWidgets/QLineEdit>



namespace Ui {
    class WithdrawWindow;
}

class WithdrawWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit WithdrawWindow(QWidget *parent = nullptr);
    ~WithdrawWindow();


signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_WithdrawButton_clicked();
    void on_ExitButton_clicked();

private:
    Ui::WithdrawWindow *ui{};
    YesWindow* yesWindow;
    NoWindow* noWindow;
};



#endif //UNTITLED13_WITHDRAWWINDOW_HPP
