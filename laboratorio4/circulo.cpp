#include "circulo.h"


Circulo::Circulo()
{

}

Circulo::~Circulo()
{

}

Circulo::Circulo(float x, float y, float vx, float vy, float rad,QString color)
{
  px=x;
  py=y;
  pvx=vx;
  pvy=vy;
  prad=rad;
  vix=pvx;
  viy=pvy;
 this-> color= color;

}

void Circulo::moverParticula(float dt, float vertlim)
{
    px+=pvx*dt;
    py+=pvy*dt;
    setPos(px,py);
}

void Circulo::colicionParticula(float horizlim, float vertlim)
{
    if((px<prad)|| (px> horizlim-prad)){
        pvx=-1*pvx;

    }
    if((py<prad)|| (py>vertlim-prad)){
        pvy=-1*pvy;
    }


}

void Circulo::aumentarVelocidad(float a)
{
    float aumentox=vix*a,aumentoy=viy*a;
    if(pvx<0){
        aumentox*=-1;
    }
    if(pvy<0){
        aumentoy*=-1;
    }
    if((pvx<(3*vix)) and pvy<(3*viy)){

        pvx=pvx+aumentox;
        pvy=pvy+aumentoy;
    }
    else{

    }
}

void Circulo::reducirVelocidad(float a)
{
    float disminucionx=vix*a,disminuciony=viy*a;
    if(pvx<0){
        disminucionx*=-1;
    }
    if(pvy<0){
        disminuciony*=-1;
    }
    if((pvx>vix) and (pvy>viy)){

        pvx=pvx-disminucionx;
        pvy=pvy-disminuciony;
    }
    else{

    }
}

void Circulo::invertirX()
{
    pvx=-1*pvx;

}

void Circulo::invertirY()
{
    pvy=-1*pvy;

}

bool Circulo::confirmacionX()
{
    int verdad=false;
    if(pvx<0){
        verdad=true;
    }
    return verdad;
}

bool Circulo::confirmacionY()
{
    bool verdad=false;
    if(pvy<0){
        verdad=true;
    }
    return verdad;
}

int Circulo::colicionParticula2(float horizlim, float vertlim)
{
    int a=0;
    if((px<prad)|| (px> horizlim-prad)){
        pvx=-1*pvx;
        a=1;

    }
    if((py<prad)|| (py>vertlim-prad)){
        pvy=-1*pvy;
        a=1;
    }
    return a;
}

QRectF Circulo::boundingRect() const
{
    return QRectF(-1*prad,-1*prad,2*prad,2*prad);
}

float Circulo::getPx() const
{
    return px;
}

float Circulo::getPy() const
{
    return py;
}

float Circulo::getPrad() const
{
    return prad;
}

void Circulo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    if(color=="rojo"){
    painter->setBrush(Qt::red);
    }
    if(color=="verde"){
    painter->setBrush(Qt::green);
    }
    if(color=="amarillo"){
    painter->setBrush(Qt::yellow);
    }
    if(color=="azul"){
    painter->setBrush(Qt::blue);
    }
    if(color=="gris"){
    painter->setBrush(Qt::gray);
    }
    if(color=="negro"){
    painter->setBrush(Qt::black);
    }
    if(color=="rosado"){
    painter->setBrush(Qt::magenta);
    }
    painter->drawEllipse(boundingRect());

}

