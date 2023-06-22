#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv)
{
    Q_INIT_RESOURCE(resources);
    QApplication app(argc, argv);
    // QApplication::setQuitOnLastWindowClosed(false);
    Window window;
    window.show();
    return app.exec();
}