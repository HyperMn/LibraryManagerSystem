#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("QMainWindow{background-image: url(:/new/background/bg.jpg)}");
    Login ldg;
    ldg.setStyleSheet("QDialog{background-image: url(:/new/background/bg_login.png)}");
    if (ldg.exec() == QDialog::Accepted)
    {
        w.show();

        return a.exec();
    }
    else
    return 0;
}
