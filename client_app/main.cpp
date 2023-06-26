#include "mainwindow.h"
#include <QApplication>
#include <QIcon>
#include <QTranslator>

int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(application);
    QApplication app(argc, argv);
    QTranslator translator;
    translator.load(":/translation.qm");
    app.installTranslator(&translator);
    app.setWindowIcon(QIcon(":/Application.png"));
    MainWindow window;
    window.show();
    return app.exec();
}