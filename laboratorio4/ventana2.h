#ifndef VENTANA2_H
#define VENTANA2_H

#include <QDialog>
#include<QStringList>
#include <QString>

namespace Ui {
class ventana2;
}

class ventana2 : public QDialog
{
    Q_OBJECT
private:
    QString radio;
    QString color;
    QString velocidad;
public:
    explicit ventana2(QWidget *parent = nullptr);
    ~ventana2();

    const QString &getRadio() const;

    const QString &getColor() const;

    const QString &getVelocidad() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ventana2 *ui;
};

#endif // VENTANA2_H
