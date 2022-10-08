#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <ventana2.h>
#include <circulo.h>
#include <ventana3.h>
#include <ventana1.h>
#include <QVector>
#include <QGraphicsScene>
#include <QTimer>
#include <math.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

private:
    float px=0,py=0,radion,velocidadn=2;
    QString color;
    QString radio;
    QString cantidad;
    QString velocidad;
    QString porcentaje;

    int cantidadn;
    bool inicio=true;
    float porcentajen;




public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QGraphicsEllipseItem *ellipce;
    void anadirParticula();
    void mostrarParticula();
    void entropia();
    void colicionEntreParticulas();





private slots:
    void on_pushButton_clicked();
    void actualizarAnimacion();
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::Widget *ui;
    QVector <Circulo*>particulas;
    Circulo *par;
    QGraphicsScene *escena;
    QTimer *Timer;

};
#endif // WIDGET_H
