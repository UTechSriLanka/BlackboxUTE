#include "startup.h"
#include "ui_startup.h"

StartUp::StartUp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartUp)
{
    ui->setupUi(this);
}

StartUp::~StartUp()
{
    delete ui;
}

void StartUp::on_ButtonMonitoring_clicked()
{

}
