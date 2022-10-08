/********************************************************************************
** Form generated from reading UI file 'ventana1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA1_H
#define UI_VENTANA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_ventana1
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QLabel *titulo_menu1;

    void setupUi(QDialog *ventana1)
    {
        if (ventana1->objectName().isEmpty())
            ventana1->setObjectName(QString::fromUtf8("ventana1"));
        ventana1->resize(400, 300);
        gridLayout = new QGridLayout(ventana1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ventana1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        comboBox_3 = new QComboBox(ventana1);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout_2->addWidget(comboBox_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(ventana1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit = new QLineEdit(ventana1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ventana1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        comboBox_2 = new QComboBox(ventana1);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(ventana1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        comboBox = new QComboBox(ventana1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ventana1);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 1, 1, 1);

        titulo_menu1 = new QLabel(ventana1);
        titulo_menu1->setObjectName(QString::fromUtf8("titulo_menu1"));

        gridLayout->addWidget(titulo_menu1, 0, 0, 1, 2);


        retranslateUi(ventana1);

        QMetaObject::connectSlotsByName(ventana1);
    } // setupUi

    void retranslateUi(QDialog *ventana1)
    {
        ventana1->setWindowTitle(QApplication::translate("ventana1", "Dialog", nullptr));
        label->setText(QApplication::translate("ventana1", "cantidad de particulas", nullptr));
        label_4->setText(QApplication::translate("ventana1", "velocidad de las particulas", nullptr));
        label_2->setText(QApplication::translate("ventana1", "radio de las particulas", nullptr));
        label_3->setText(QApplication::translate("ventana1", "color ", nullptr));
        titulo_menu1->setText(QApplication::translate("ventana1", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">MENU</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana1: public Ui_ventana1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA1_H
