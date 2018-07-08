#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}



void Login::on_login_clicked()
{
  /*
    if (userLineEdit->text().trimmed() == "username" && pwdLineEdit->text() == "123456")
        {
            accept();
        }
    else
    {
        QMessageBox::warning(this,"警告！","用户名或者密码错误",QMessageBox::Yes);
        userLineEdit->clear();
        pwdLineEdit->clear();
        userLineEdit->setFocus();
    }
    */
    accept();
}

void Login::on_exit_click()
    {
        close();
    }
