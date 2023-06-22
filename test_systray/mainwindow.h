#ifndef MAINWINDOW_H_902
#define MAINWINDOW_H_902
#include <QDialog>
#include <QSystemTrayIcon>

class QAction;
class QMenu;

namespace Ui{
    class Window;
}

class Window : public QDialog
{
    Q_OBJECT

public:
    Window();

private:
    Ui::Window* ui;
    QAction* quitAction;
    QSystemTrayIcon* trayIcon;
    QMenu* trayIconMenu;
};
#endif