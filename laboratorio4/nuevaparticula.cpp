#include "nuevaparticula.h"
#include "ui_nuevaparticula.h"

nuevaParticula::nuevaParticula(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevaParticula)
{
    ui->setupUi(this);
}

nuevaParticula::~nuevaParticula()
{
    delete ui;
}

void nuevaParticula::on_aceptar_clicked()
{


}

