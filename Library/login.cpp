#include "login.h"
#include "ui_login.h"
#include "about.h"
#include "ui_about.h"

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
  /*需要用户名区别用户
    if (userLineEdit->text().trimmed() == "username" && pwdLineEdit->text() == "123456")
        {
            accept();
            if(BookAdmin)
                ui.BookAdmin->show();
            else
                ui.BookAdmin->hide();
            if(SystemAdmin)
            {
                ui.BookAdmin->show();
                ui.SystemAdmin->show();
            }
            else
            {
                ui.BookAdmin->hide();
                ui.SystemAdmin->hide();
            }
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
