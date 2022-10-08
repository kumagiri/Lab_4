#include "ventana1.h"
#include "ui_ventana1.h"

const QString &ventana1::getCantidad() const
{
    return cantidad;
}




const QString &ventana1::getRadio() const
{
    return radio;
}



const QString &ventana1::getColor() const
{
    return color;
}



const QString &ventana1::getVelocidad() const
{
    return velocidad;
}



ventana1::ventana1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ventana1)
{
    ui->setupUi(this);
    QStringList colores;
    colores<<"rojo"<<"verde"<<"amarillo"<<"azul"<<
             "gris"<<"negro"<<"rosado";
    ui->comboBox->addItems(colores);
    ui->comboBox_2->addItem("5");
    ui->comboBox_2->addItem("10");
    ui->comboBox_2->addItem("15");
    ui->comboBox_2->addItem("20");
    ui->comboBox_2->addItem("25");
    ui->comboBox_2->addItem("30");
    ui->comboBox_3->addItem("1");
    ui->comboBox_3->addItem("2");
    ui->comboBox_3->addItem("3");
    ui->comboBox_3->addItem("4");
    ui->comboBox_3->addItem("5");
    ui->comboBox_3->addItem("6");
    ui->comboBox_3->addItem("7");

}

ventana1::~ventana1()
{
    delete ui;
}

void ventana1::on_buttonBox_accepted()
{
    cantidad=ui->comboBox_3->currentText();
    color=ui->comboBox->currentText();
    radio=ui->comboBox_2->currentText();
    velocidad=ui->lineEdit->text();
    if(velocidad==""){
        velocidad="2";
    }
    accept();

}


void ventana1::on_buttonBox_rejected()
{
    reject();
}

