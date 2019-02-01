#include "setupwizard.h"
#include "ui_setupwizard.h"

SetupWizard::SetupWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::SetupWizard)
{
    ui->setupUi(this);
}

SetupWizard::~SetupWizard()
{
    delete ui;
}
