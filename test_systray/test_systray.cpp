#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>


int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(resources);
    QApplication app(argc, argv);
    QTranslator translator;
    translator.load(":/translation.qm");
    app.installTranslator(&translator);
    // QApplication::setQuitOnLastWindowClosed(false);
    Window window;
    window.show();
    return app.exec();
}