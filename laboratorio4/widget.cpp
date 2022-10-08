#include "widget.h"
#include "ui_widget.h"
#include "circulo.h"
#define DT 2.5
#define VERTLIM 501
#define HORIZLIM 501
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ventana1 objeto1(this);
    objeto1.exec();
    escena = new QGraphicsScene(this);
    escena->setSceneRect(0,0,500,500);
    cantidad= objeto1.getCantidad();
    cantidadn=cantidad.toInt();
    color=objeto1.getColor();
    radio=objeto1.getRadio();
    radion=radio.toFloat();
    velocidad=objeto1.getVelocidad();
    velocidadn=velocidad.toFloat();
    for(int i=0;i<cantidadn;i++){
    anadirParticula();
    }
    inicio=false;
    Timer =new QTimer(this);
    ui->graphicsView->setScene(escena);
    mostrarParticula();
    entropia();


    Timer->stop();

    connect(Timer,SIGNAL(timeout()),this,SLOT(actualizarAnimacion()));

    Timer->start(100);

}

Widget::~Widget()
{
    delete ui;
    delete Timer;
    delete particulas[0];
    delete escena;

}



void Widget::mostrarParticula()
{
    for(int i=0;i<particulas.size();i++){
         escena->addItem(particulas[i]);
    }
}

void Widget::entropia()
{
    for(int i=0;i<particulas.size();i++){

         particulas[i]->moverParticula(DT,VERTLIM);
    }
}

void Widget::anadirParticula()
{
     px=rand()%490;
     py=rand()%490;

     particulas.push_front((new Circulo(px,py,velocidadn,velocidadn,radion,color)));
     mostrarParticula();
}


void Widget::on_pushButton_clicked()
{
  ventana2 objeto2(this);
  objeto2.setWindowTitle("creando nueva particula");
  objeto2.exec();
  color=objeto2.getColor();
  radio=objeto2.getRadio();
  velocidad=objeto2.getVelocidad();
  radion=radio.toFloat();
  velocidadn=velocidad.toFloat();
  anadirParticula();

}

void Widget::actualizarAnimacion()
{
    for(int i=0;i<particulas.size();i++){
    particulas[i]->moverParticula(DT,VERTLIM);
    particulas[i]->colicionParticula(VERTLIM,HORIZLIM);
    for(int j=0+i;j<particulas.size();j++){

        if((particulas[i]->boundingRect().intersects(particulas[j]->boundingRect()))==true){
            float a1,b1,c1,d1,w,h,distancia;
                       a1=particulas[i]->getPx();
                       b1=particulas[i]->getPy();
                       c1=particulas[j]->getPx();
                       d1=particulas[j]->getPy();
                       w=particulas[i]->getPrad();
                       h=particulas[j]->getPrad();
                       distancia=sqrt(((a1-c1)*(a1-c1))+((b1-d1)*(b1-d1)));
                       if(distancia<w+h){
                           bool a,b,c,d;
                           a=particulas[i]->confirmacionX();
                           b=particulas[i]->confirmacionY();
                           c=particulas[j]->confirmacionX();
                           d=particulas[j]->confirmacionY();
                           if((a==false and b==true)and(c==true and d==false)){
                                particulas[i]->invertirX();

                                particulas[j]->invertirX();


                                break;
                           }
                           else if((a==false and b==false)and(c==true and d==true)){

                               particulas[i]->invertirX();
                               particulas[i]->invertirY();
                               particulas[j]->invertirX();
                               particulas[j]->invertirY();

                                break;
                                                  }
                           else if((a==false and b==true)and(c==true and d==true)){
                               particulas[i]->invertirX();
                               particulas[i]->invertirY();
                               particulas[j]->invertirX();
                               particulas[j]->invertirY();
                                    break;
                           }
                           else if((a==false and b==true)and(c==false and d==false)){
                               particulas[i]->invertirX();
                               particulas[i]->invertirY();
                               particulas[j]->invertirX();
                               particulas[j]->invertirY();

                                    break;
                           }
                           else if((a==true and b==true)and(c==true and d==false)){
                               particulas[i]->invertirX();
                               particulas[i]->invertirY();
                               particulas[j]->invertirX();
                               particulas[j]->invertirY();

                                    break;
                           }
                           else if((a==false and b==false)and(c==true and d==false)){
                               particulas[i]->invertirX();
                               particulas[i]->invertirY();
                               particulas[j]->invertirX();
                               particulas[j]->invertirY();

                                   break;

                           }



        }
    }

    }
}
}

void Widget::on_pushButton_2_clicked()
{
    if(particulas.size()>0){
        int a=0;
        a=(particulas.size());
        escena->removeItem(particulas[a-1]);
        particulas.erase((particulas.end()-1));

    }
}


void Widget::on_pushButton_4_clicked()
{
    ventana3 objeto3(this);
    objeto3.setWindowTitle("Aumento de velocidad");
    objeto3.exec();
    porcentaje=objeto3.getPorcentajev();
    porcentajen=porcentaje.toFloat();
    porcentajen=porcentajen/100;
    for(int i=0;i<particulas.size();i++){
         particulas[i]->aumentarVelocidad(porcentajen);
     }


}


void Widget::on_pushButton_3_clicked()
{
    ventana3 objeto3(this);
    objeto3.setWindowTitle("Reduccion de velocidad");
    objeto3.exec();
    porcentaje=objeto3.getPorcentajev();
    porcentajen=porcentaje.toFloat();
    porcentajen=porcentajen/100;
    for(int i=0;i<particulas.size();i++){
        particulas[i]->reducirVelocidad(porcentajen);
    }
}

