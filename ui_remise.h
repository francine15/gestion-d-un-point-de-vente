/********************************************************************************
** Form generated from reading UI file 'remise.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMISE_H
#define UI_REMISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_remise
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *remise)
    {
        if (remise->objectName().isEmpty())
            remise->setObjectName("remise");
        remise->resize(640, 352);
        pushButton = new QPushButton(remise);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(330, 210, 161, 51));
        pushButton_2 = new QPushButton(remise);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 210, 161, 51));
        horizontalSlider = new QSlider(remise);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(100, 110, 251, 51));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(remise);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 100, 81, 61));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(remise);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 20, 351, 51));

        retranslateUi(remise);

        QMetaObject::connectSlotsByName(remise);
    } // setupUi

    void retranslateUi(QDialog *remise)
    {
        remise->setWindowTitle(QCoreApplication::translate("remise", "remise", nullptr));
        pushButton->setText(QCoreApplication::translate("remise", "Valider", nullptr));
        pushButton_2->setText(QCoreApplication::translate("remise", "Fermer", nullptr));
        label->setText(QCoreApplication::translate("remise", "0%", nullptr));
        label_2->setText(QCoreApplication::translate("remise", "veuillez entrer le pourcentage  de la remise", nullptr));
    } // retranslateUi

};

namespace Ui {
    class remise: public Ui_remise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMISE_H
