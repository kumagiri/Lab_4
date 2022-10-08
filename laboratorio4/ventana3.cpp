#include "ventana3.h"
#include "ui_ventana3.h"

const QString &ventana3::getPorcentajev() const
{
    return porcentajev;
}

ventana3::ventana3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana3)
{
    ui->setupUi(this);
    QStringList porcentajes;
    porcentajes<<"10"<<"20"<<"30"<<
                 "40"<<"50"<<"60"<<
                 "70"<<"80"<<"90"<<
                 "100";
    ui->comboBox->addItems(porcentajes);

}

ventana3::~ventana3()
{


    delete ui;
}

void ventana3::on_buttonBox_accepted()
{
    porcentajev=ui->comboBox->currentText();
    accept();
}


void ventana3::on_buttonBox_rejected()
{
    reject();
}

