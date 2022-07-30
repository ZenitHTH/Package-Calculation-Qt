#include "packagecalculation.h"
#include "./ui_packagecalculation.h"
#include "silicagel.h"
#include "oxygenabsorber.h"

PackageCalculation::PackageCalculation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PackageCalculation)
{
    ui->setupUi(this);
}

PackageCalculation::~PackageCalculation()
{
    delete ui;
}

void PackageCalculation::on_SG_Submit_clicked()
{
    SilicaGel* sg = new SilicaGel((float)ui->SG_Height->value(),(float)ui->SG_Width->value(),(float)ui->SG_Lenght->value());
    ui->SG_PackageVolume->setText(QString::number(sg->PackageVolume()));
    ui->SG_SilicaGel->setText(QString::number(sg->SilicaGelVolume()));
}


void PackageCalculation::on_SG_Reset_clicked()
{
    ui->SG_Height->setValue(0.00f);
    ui->SG_Width->setValue(0.00f);
    ui->SG_Lenght->setValue(0.00f);
}


void PackageCalculation::on_OXA_Submit_clicked()
{
    OxygenAbsorber* oxa = new OxygenAbsorber(ui->OXA_Height->value(),ui->OXA_Width->value(),ui->OXA_Lenght->value(),ui->OXA_FoodWeight->value());
    ui->OXA_PackageVolume->setText(QString::number(oxa->PackageVolume()));
    ui->OXA_OxygenAbsorber->setText(QString::number(oxa->OxygenAbsorberVolume()));
}


void PackageCalculation::on_OXA_Reset_clicked()
{
    ui->OXA_Height->setValue(0.00f);
    ui->OXA_Width->setValue(0.00f);
    ui->OXA_Lenght->setValue(0.00f);
    ui->OXA_FoodWeight->setValue(0.00f);
}

