#ifndef CIRCULO_H
#define CIRCULO_H
#include <QPainter>
#include <QGraphicsItem>
#include <QString>





class Circulo:public QGraphicsItem
{
    float px;
    float py;
    float pvx;
    float pvy;
    float prad;
    float vix,viy;
    QString color;

    void paint (QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

public:
    Circulo();
    ~Circulo();
    Circulo(float x,float y,float vx,float vy,float rad,QString color);
    void moverParticula(float dt,float vertlim);
    void colicionParticula(float horizlim, float vertlim);
    void aumentarVelocidad(float);
    void reducirVelocidad(float);
    void invertirX();
    void invertirY();
    bool confirmacionX();
    bool confirmacionY();
    int colicionParticula2(float horizlim, float vertlim);

    QRectF boundingRect()const;



    float getPx() const;
    float getPy() const;
    float getPrad() const;
};

#endif // CIRCULO_H
