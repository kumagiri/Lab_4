/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *nuevo;
    QPushButton *remover;
    QPushButton *aumentar;
    QPushButton *disminuir;
    QGraphicsView *graphicsView;
    QOpenGLWidget *openGLWidget;
    QOpenGLWidget *openGLWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 350);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nuevo = new QPushButton(centralwidget);
        nuevo->setObjectName(QString::fromUtf8("nuevo"));

        horizontalLayout->addWidget(nuevo);

        remover = new QPushButton(centralwidget);
        remover->setObjectName(QString::fromUtf8("remover"));

        horizontalLayout->addWidget(remover);

        aumentar = new QPushButton(centralwidget);
        aumentar->setObjectName(QString::fromUtf8("aumentar"));

        horizontalLayout->addWidget(aumentar);

        disminuir = new QPushButton(centralwidget);
        disminuir->setObjectName(QString::fromUtf8("disminuir"));

        horizontalLayout->addWidget(disminuir);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);

        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);

        openGLWidget_2 = new QOpenGLWidget(centralwidget);
        openGLWidget_2->setObjectName(QString::fromUtf8("openGLWidget_2"));

        gridLayout->addWidget(openGLWidget_2, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        nuevo->setText(QApplication::translate("MainWindow", "nueva particula", nullptr));
        remover->setText(QApplication::translate("MainWindow", "remover particula", nullptr));
        aumentar->setText(QApplication::translate("MainWindow", "aumentar velocidad", nullptr));
        disminuir->setText(QApplication::translate("MainWindow", "disminuir velocidad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
