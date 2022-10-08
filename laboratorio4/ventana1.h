#ifndef VENTANA1_H
#define VENTANA1_H

#include <QDialog>
#include <QString>



namespace Ui {
class ventana1;
}

class ventana1 : public QDialog
{
    Q_OBJECT
private:

    QString cantidad;
    QString radio;
    QString color;
    QString velocidad;


public:
    explicit ventana1(QWidget *parent = nullptr);
    ~ventana1();
    QStringList colores;

    const QString &getCantidad() const;


    const QString &getRadio() const;

    const QString &getColor() const;


    const QString &getVelocidad() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ventana1 *ui;
};

#endif // VENTANA1_H
