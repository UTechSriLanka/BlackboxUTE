#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "startup.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_actionFull_Screen_triggered();

    void on_actionNew_Session_triggered();

    void on_newSeshButton_clicked();

private:
    Ui::MainWindow *ui;
    StartUp *StartUpChoice;
};

#endif // MAINWINDOW_H
