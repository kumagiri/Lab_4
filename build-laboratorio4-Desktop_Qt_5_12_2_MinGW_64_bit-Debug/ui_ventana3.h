/********************************************************************************
** Form generated from reading UI file 'ventana3.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA3_H
#define UI_VENTANA3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ventana3
{
public:
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;

    void setupUi(QDialog *ventana3)
    {
        if (ventana3->objectName().isEmpty())
            ventana3->setObjectName(QString::fromUtf8("ventana3"));
        ventana3->resize(400, 131);
        label = new QLabel(ventana3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 241, 41));
        label_2 = new QLabel(ventana3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 60, 91, 20));
        buttonBox = new QDialogButtonBox(ventana3);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 100, 166, 24));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(ventana3);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(190, 60, 72, 24));

        retranslateUi(ventana3);

        QMetaObject::connectSlotsByName(ventana3);
    } // setupUi

    void retranslateUi(QDialog *ventana3)
    {
        ventana3->setWindowTitle(QApplication::translate("ventana3", "Dialog", nullptr));
        label->setText(QApplication::translate("ventana3", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Por favor elige el porcentaje</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("ventana3", "<html><head/><body><p><span style=\" font-size:12pt;\">porcentaje</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana3: public Ui_ventana3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA3_H
