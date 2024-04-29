/********************************************************************************
** Form generated from reading UI file 'ajouter_p.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJOUTER_P_H
#define UI_AJOUTER_P_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ajouter_p
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QLabel *label_4;

    void setupUi(QDialog *ajouter_p)
    {
        if (ajouter_p->objectName().isEmpty())
            ajouter_p->setObjectName("ajouter_p");
        ajouter_p->resize(523, 399);
        label = new QLabel(ajouter_p);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 40, 141, 51));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ajouter_p);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 141, 51));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(ajouter_p);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 110, 181, 31));
        lineEdit_3 = new QLineEdit(ajouter_p);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(230, 170, 181, 31));
        label_3 = new QLabel(ajouter_p);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 160, 141, 51));
        label_3->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(ajouter_p);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(230, 50, 171, 29));
        pushButton = new QPushButton(ajouter_p);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 340, 121, 41));
        pushButton_2 = new QPushButton(ajouter_p);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 340, 141, 41));
        lineEdit_4 = new QLineEdit(ajouter_p);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(230, 230, 181, 31));
        label_4 = new QLabel(ajouter_p);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 220, 141, 51));
        label_4->setAlignment(Qt::AlignCenter);

        retranslateUi(ajouter_p);

        QMetaObject::connectSlotsByName(ajouter_p);
    } // setupUi

    void retranslateUi(QDialog *ajouter_p)
    {
        ajouter_p->setWindowTitle(QCoreApplication::translate("ajouter_p", "Ajout", nullptr));
        label->setText(QCoreApplication::translate("ajouter_p", "categories", nullptr));
        label_2->setText(QCoreApplication::translate("ajouter_p", "Nom", nullptr));
        label_3->setText(QCoreApplication::translate("ajouter_p", "prix unitaire", nullptr));
        pushButton->setText(QCoreApplication::translate("ajouter_p", "annuler", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ajouter_p", "sauvegarder", nullptr));
        label_4->setText(QCoreApplication::translate("ajouter_p", "Quantit\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ajouter_p: public Ui_ajouter_p {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJOUTER_P_H
