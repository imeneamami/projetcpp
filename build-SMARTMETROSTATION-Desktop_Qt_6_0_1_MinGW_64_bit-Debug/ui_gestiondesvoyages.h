/********************************************************************************
** Form generated from reading UI file 'gestiondesvoyages.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONDESVOYAGES_H
#define UI_GESTIONDESVOYAGES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gestiondesvoyages
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menugestion_des_voyages;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Gestiondesvoyages)
    {
        if (Gestiondesvoyages->objectName().isEmpty())
            Gestiondesvoyages->setObjectName(QString::fromUtf8("Gestiondesvoyages"));
        Gestiondesvoyages->resize(800, 600);
        centralwidget = new QWidget(Gestiondesvoyages);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 40, 721, 401));
        tabWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/image/ressource/168683873_494047668563711_2755156405557048015_n.png);\n"
"color: rgb(255, 255, 255);"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        Gestiondesvoyages->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Gestiondesvoyages);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menugestion_des_voyages = new QMenu(menubar);
        menugestion_des_voyages->setObjectName(QString::fromUtf8("menugestion_des_voyages"));
        Gestiondesvoyages->setMenuBar(menubar);
        statusbar = new QStatusBar(Gestiondesvoyages);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Gestiondesvoyages->setStatusBar(statusbar);

        menubar->addAction(menugestion_des_voyages->menuAction());

        retranslateUi(Gestiondesvoyages);

        QMetaObject::connectSlotsByName(Gestiondesvoyages);
    } // setupUi

    void retranslateUi(QMainWindow *Gestiondesvoyages)
    {
        Gestiondesvoyages->setWindowTitle(QCoreApplication::translate("Gestiondesvoyages", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Gestiondesvoyages", "Ajouter un voyage", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Gestiondesvoyages", "Tab 2", nullptr));
        menugestion_des_voyages->setTitle(QCoreApplication::translate("Gestiondesvoyages", "gestion des voyages", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gestiondesvoyages: public Ui_Gestiondesvoyages {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONDESVOYAGES_H
