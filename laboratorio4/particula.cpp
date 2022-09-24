#include "particula.h"

particula::particula():QGraphicsItem()
{

}



QRectF particula::boundingRect() const
{
    return QRectF(20,20,100,100);
}

void particula::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QString a=color;
    painter->setBrush(Qt::red);
    painter->drawEllipse(120,5,100,200);

}
