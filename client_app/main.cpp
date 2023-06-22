#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(application);
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/Application.png"));
    MainWindow window;
    window.show();
    return app.exec();
}