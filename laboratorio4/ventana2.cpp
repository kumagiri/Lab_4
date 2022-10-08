#include "ventana2.h"
#include "ui_ventana2.h"

const QString &ventana2::getRadio() const
{
    return radio;
}

const QString &ventana2::getColor() const
{
    return color;
}

const QString &ventana2::getVelocidad() const
{
    return velocidad;
}

ventana2::ventana2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana2)
{
    ui->setupUi(this);
    QStringList colores;
    colores<<"rojo"<<"verde"<<"amarillo"<<"azul"<<
             "gris"<<"negro"<<"rosado";
    ui->comboBox->addItems(colores);

}

ventana2::~ventana2()
{
    delete ui;
}

void ventana2::on_buttonBox_accepted()
{
    color=ui->comboBox->currentText();
    radio=ui->lineEdit->text();
    if(radio==""){
        radio="20";
    }
    velocidad=ui->lineEdit_2->text();
    if(velocidad==""){
        velocidad="2";
    }
    accept();

}


void ventana2::on_buttonBox_rejected()
{
    reject();
}

