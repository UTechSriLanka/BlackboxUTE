#ifndef STARTUP_H
#define STARTUP_H

#include <QWidget>

namespace Ui {
class StartUp;
}

class StartUp : public QWidget
{
    Q_OBJECT

public:
    explicit StartUp(QWidget *parent = nullptr);
    ~StartUp();

private slots:
    void on_ButtonMonitoring_clicked();

private:
    Ui::StartUp *ui;
};

#endif // STARTUP_H
