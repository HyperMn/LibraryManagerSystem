#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_login_clicked();
    void on_exit_click();
    void on_About_clicked();

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
