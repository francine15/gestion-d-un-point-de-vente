/********************************************************************************
** Form generated from reading UI file 'page2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE2_H
#define UI_PAGE2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_page2
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;

    void setupUi(QDialog *page2)
    {
        if (page2->objectName().isEmpty())
            page2->setObjectName("page2");
        page2->resize(818, 509);
        page2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(page2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 70, 441, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Ressources/add items.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(48, 56));
        pushButton_2 = new QPushButton(page2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 120, 261, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/Ressources/fiscaux.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(50, 50));
        pushButton_3 = new QPushButton(page2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(310, 120, 241, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/Ressources/R.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(56, 56));
        pushButton_8 = new QPushButton(page2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(590, 70, 141, 51));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_9 = new QPushButton(page2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(590, 130, 141, 51));
        pushButton_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(page2);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 521, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: transparent;\n"
"font: 16pt \"Segoe UI\";"));

        retranslateUi(page2);

        QMetaObject::connectSlotsByName(page2);
    } // setupUi

    void retranslateUi(QDialog *page2)
    {
        page2->setWindowTitle(QCoreApplication::translate("page2", "Gestion_Stock", nullptr));
        pushButton->setText(QCoreApplication::translate("page2", "     Ajouter une nouvelle categorie", nullptr));
        pushButton_2->setText(QCoreApplication::translate("page2", "        Parametres fiscaux", nullptr));
        pushButton_3->setText(QCoreApplication::translate("page2", "Parametres de Remise", nullptr));
        pushButton_8->setText(QCoreApplication::translate("page2", "nouvelle facture", nullptr));
        pushButton_9->setText(QCoreApplication::translate("page2", "Accueil", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class page2: public Ui_page2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE2_H
