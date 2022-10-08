#ifndef VENTANA3_H
#define VENTANA3_H

#include <QDialog>
#include <QString>
#include <QStringList>
namespace Ui {
class ventana3;
}

class ventana3 : public QDialog
{
    Q_OBJECT

private:
    QString porcentajev;

public:
    explicit ventana3(QWidget *parent = nullptr);
    ~ventana3();

    const QString &getPorcentajev() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ventana3 *ui;
};

#endif // VENTANA3_H
