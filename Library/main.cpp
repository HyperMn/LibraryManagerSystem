#include "mainwindow.h"
#include "login.h"
#include "about.h"
#include "ui_about.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("QMainWindow{background-image: url(:/new/background/bg.jpg)}");
    Login ldg;
    ldg.setStyleSheet("QDialog{background-image: url(:/new/background/bg_login.png)}");
    About about;                        // 建立自己新建类的实例about
    if(about.exec() == QDialog::Accepted) // 利用Accepted返回值判断按钮是否被按下
        {
            about.show();
        }
    if (ldg.exec() == QDialog::Accepted)
    {
        w.show();

        return a.exec();
    }
    else
    return 0;
}
