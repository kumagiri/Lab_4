/********************************************************************************
** Form generated from reading UI file 'ventana2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA2_H
#define UI_VENTANA2_H

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

class Ui_ventana2
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ventana2)
    {
        if (ventana2->objectName().isEmpty())
            ventana2->setObjectName(QString::fromUtf8("ventana2"));
        ventana2->resize(400, 300);
        gridLayout = new QGridLayout(ventana2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ventana2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ventana2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(ventana2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(ventana2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_2 = new QLineEdit(ventana2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(ventana2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(ventana2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout_3, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ventana2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 1);


        retranslateUi(ventana2);

        QMetaObject::connectSlotsByName(ventana2);
    } // setupUi

    void retranslateUi(QDialog *ventana2)
    {
        ventana2->setWindowTitle(QApplication::translate("ventana2", "Dialog", nullptr));
        label->setText(QApplication::translate("ventana2", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">Adicion de particulas</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("ventana2", "radio de la particula", nullptr));
        label_3->setText(QApplication::translate("ventana2", "velocidad", nullptr));
        label_4->setText(QApplication::translate("ventana2", "color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana2: public Ui_ventana2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA2_H
