

#ifndef UNTITLED13_YESWINDOW_HPP
#define UNTITLED13_YESWINDOW_HPP
#include <../ui_yeswindow.h>


#include <QMainWindow>
#include <QtWidgets/QLineEdit>

extern int currency;

namespace Ui {
    class YesWindow;
}

class YesWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit YesWindow (QWidget *parent = nullptr);
    ~YesWindow ();

    void showw(int currency);


signals:
    void withdrawWindow();
    void mobileWindow();

   // Сигнал для первого окна на открытие

private slots:

    void on_ExitButton_clicked();


private:

    Ui::YesWindow  *ui{};

};




#endif //UNTITLED13_YESWINDOW_HPP
