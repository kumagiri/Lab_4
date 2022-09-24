#ifndef PARTICULA_H
#define PARTICULA_H
#include <QString>
#include <QGraphicsItem>
#include <QPainter>

class particula : QGraphicsItem
{
    QString color;
public:
    particula();


protected:
    QRectF boundingRect() const ;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr);

};

#endif // PARTICULA_H
