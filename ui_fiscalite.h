/********************************************************************************
** Form generated from reading UI file 'fiscalite.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FISCALITE_H
#define UI_FISCALITE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_fiscalite
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label;

    void setupUi(QDialog *fiscalite)
    {
        if (fiscalite->objectName().isEmpty())
            fiscalite->setObjectName("fiscalite");
        fiscalite->resize(493, 364);
        pushButton = new QPushButton(fiscalite);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 270, 161, 51));
        label_2 = new QLabel(fiscalite);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 40, 331, 51));
        pushButton_2 = new QPushButton(fiscalite);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 270, 161, 51));
        horizontalSlider = new QSlider(fiscalite);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(140, 130, 251, 51));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(fiscalite);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 120, 63, 61));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(fiscalite);

        QMetaObject::connectSlotsByName(fiscalite);
    } // setupUi

    void retranslateUi(QDialog *fiscalite)
    {
        fiscalite->setWindowTitle(QCoreApplication::translate("fiscalite", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("fiscalite", "Valider", nullptr));
        label_2->setText(QCoreApplication::translate("fiscalite", "veuillez entrer le pourcentage  de la remise", nullptr));
        pushButton_2->setText(QCoreApplication::translate("fiscalite", "Fermer", nullptr));
        label->setText(QCoreApplication::translate("fiscalite", "0%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fiscalite: public Ui_fiscalite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FISCALITE_H
