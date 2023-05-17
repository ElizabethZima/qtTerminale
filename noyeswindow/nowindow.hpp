#ifndef UNTITLED13_NOWINDOW_HPP
#define UNTITLED13_NOWINDOW_HPP


#include <../ui_nowindow.h>


#include <QMainWindow>
#include <QtWidgets/QLineEdit>

extern int currency;

namespace Ui {
    class NoWindow;
}

class NoWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit NoWindow (QWidget *parent = nullptr);
    ~NoWindow ();

    void showw(int currency);


//signals:
//    void withdrawWindow();  // Сигнал для первого окна на открытие
//    void mobileWindow();
private slots:

    void on_ExitButton_clicked();

private:

    Ui::NoWindow  *ui{};

};


#endif //UNTITLED13_NOWINDOW_HPP
