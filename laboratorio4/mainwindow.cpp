#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene();
    ui->graphicsView->setScene((escena));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_nuevo_clicked()
{

}


