#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    MainWindow *recent = new MainWindow();
    recent->show();
}

void MainWindow::on_actionExit_triggered()
{
    MainWindow::close();
}

void MainWindow::on_actionFull_Screen_triggered()
{
    MainWindow::showFullScreen();
}

void MainWindow::on_actionNew_Session_triggered()
{
    StartUpChoice = new StartUp();
    StartUpChoice->show();
}

void MainWindow::on_newSeshButton_clicked()
{
    StartUpChoice = new StartUp();
    StartUpChoice->show();
}
