#ifndef UNTITLED13_DEPOSITEWINDOW_HPP
#define UNTITLED13_DEPOSITEWINDOW_HPP
#include "../ui_depositewindow.h"
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

    double getMoney();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_ExitButton_clicked();

private:
    Ui::DepositeWindow *ui{};
};


#endif //UNTITLED13_DEPOSITEWINDOW_HPP
