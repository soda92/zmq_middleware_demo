#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow()
: ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->header_text->setText(tr("client app demo"));
}