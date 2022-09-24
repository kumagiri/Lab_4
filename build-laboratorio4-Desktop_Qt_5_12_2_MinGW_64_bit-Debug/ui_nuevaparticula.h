/********************************************************************************
** Form generated from reading UI file 'nuevaparticula.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVAPARTICULA_H
#define UI_NUEVAPARTICULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nuevaParticula
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *aceptar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *nuevaParticula)
    {
        if (nuevaParticula->objectName().isEmpty())
            nuevaParticula->setObjectName(QString::fromUtf8("nuevaParticula"));
        nuevaParticula->resize(400, 300);
        label = new QLabel(nuevaParticula);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 9, 267, 16));
        label_3 = new QLabel(nuevaParticula);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 200, 247, 16));
        aceptar = new QPushButton(nuevaParticula);
        aceptar->setObjectName(QString::fromUtf8("aceptar"));
        aceptar->setGeometry(QRect(310, 260, 80, 24));
        layoutWidget = new QWidget(nuevaParticula);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 95, 298, 92));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(nuevaParticula);

        QMetaObject::connectSlotsByName(nuevaParticula);
    } // setupUi

    void retranslateUi(QDialog *nuevaParticula)
    {
        nuevaParticula->setWindowTitle(QApplication::translate("nuevaParticula", "Dialog", nullptr));
        label->setText(QApplication::translate("nuevaParticula", "Por favor introdusca la informacion de la particula:", nullptr));
        label_3->setText(QApplication::translate("nuevaParticula", "la particula aparecera en una posicion aleatoria", nullptr));
        aceptar->setText(QApplication::translate("nuevaParticula", "Aceptar", nullptr));
        label_2->setText(QApplication::translate("nuevaParticula", "radio de la particula en milimetros", nullptr));
        label_4->setText(QApplication::translate("nuevaParticula", "color", nullptr));
        label_5->setText(QApplication::translate("nuevaParticula", "velocidad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nuevaParticula: public Ui_nuevaParticula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVAPARTICULA_H
