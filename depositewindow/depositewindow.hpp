#ifndef UNTITLED13_DEPOSITEWINDOW_HPP
#define UNTITLED13_DEPOSITEWINDOW_HPP
#include "../ui_depositewindow.h"
#include "../noyeswindow/YesWindow.hpp"
#include <QMainWindow>

namespace Ui {
    class DepositeWindow;
}

class DepositeWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit DepositeWindow(QWidget *parent = nullptr);
    ~DepositeWindow();


signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_okButton_clicked();
    void on_ExitButton_clicked();

private:
    Ui::DepositeWindow *ui{};
    YesWindow* yesWindow;
};


#endif //UNTITLED13_DEPOSITEWINDOW_HPP
