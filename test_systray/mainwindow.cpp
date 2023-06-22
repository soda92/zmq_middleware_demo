#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include <QMenu>

Window::Window()
    : ui(new Ui::Window)
{
    ui->setupUi(this);
    quitAction = new QAction(tr("&quit"), this);
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
    trayIconMenu = new QMenu(this);
    trayIconMenu->addAction(quitAction);
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setContextMenu(trayIconMenu);
    trayIcon->setIcon(QIcon(":/systray_logo.png"));
    trayIcon->show();
}
