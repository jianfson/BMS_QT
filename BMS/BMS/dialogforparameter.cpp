#include "dialogforparameter.h"
#include "ui_dialogforparameter.h"

Dialogforparameter::Dialogforparameter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogforparameter)
{
    ui->setupUi(this);
}

Dialogforparameter::~Dialogforparameter()
{
    delete ui;
}
