#include "dialogforbmu.h"
#include "ui_dialogforbmu.h"

DialogforBMU::DialogforBMU(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogforBMU)
{
    ui->setupUi(this);
}

DialogforBMU::~DialogforBMU()
{
    delete ui;
}
