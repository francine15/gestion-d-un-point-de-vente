/********************************************************************************
** Form generated from reading UI file 'vr_facture.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VR_FACTURE_H
#define UI_VR_FACTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_vr_facture
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *vr_facture)
    {
        if (vr_facture->objectName().isEmpty())
            vr_facture->setObjectName("vr_facture");
        vr_facture->resize(696, 436);
        label = new QLabel(vr_facture);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 131, 61));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(vr_facture);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 70, 131, 51));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(vr_facture);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 150, 131, 51));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(vr_facture);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(140, 200, 131, 51));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(vr_facture);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 300, 131, 41));
        label_5->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(vr_facture);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(320, 30, 221, 29));
        lineEdit_2 = new QLineEdit(vr_facture);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(320, 80, 221, 29));
        lineEdit_3 = new QLineEdit(vr_facture);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(320, 160, 221, 29));
        lineEdit_4 = new QLineEdit(vr_facture);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(320, 210, 221, 29));
        lineEdit_5 = new QLineEdit(vr_facture);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEnabled(false);
        lineEdit_5->setGeometry(QRect(320, 310, 221, 29));
        pushButton = new QPushButton(vr_facture);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(530, 370, 121, 31));
        pushButton_2 = new QPushButton(vr_facture);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 370, 121, 31));
        label_6 = new QLabel(vr_facture);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 250, 131, 51));
        label_6->setAlignment(Qt::AlignCenter);
        lineEdit_6 = new QLineEdit(vr_facture);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setEnabled(false);
        lineEdit_6->setGeometry(QRect(320, 260, 221, 29));
        label_7 = new QLabel(vr_facture);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 110, 131, 51));
        label_7->setAlignment(Qt::AlignCenter);
        lineEdit_7 = new QLineEdit(vr_facture);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(320, 120, 221, 29));

        retranslateUi(vr_facture);

        QMetaObject::connectSlotsByName(vr_facture);
    } // setupUi

    void retranslateUi(QDialog *vr_facture)
    {
        vr_facture->setWindowTitle(QCoreApplication::translate("vr_facture", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("vr_facture", "nom produit", nullptr));
        label_2->setText(QCoreApplication::translate("vr_facture", "prix unitaire", nullptr));
        label_3->setText(QCoreApplication::translate("vr_facture", "Quantit\303\251", nullptr));
        label_4->setText(QCoreApplication::translate("vr_facture", "Total", nullptr));
        label_5->setText(QCoreApplication::translate("vr_facture", "Date ", nullptr));
        pushButton->setText(QCoreApplication::translate("vr_facture", "Enregistrer", nullptr));
        pushButton_2->setText(QCoreApplication::translate("vr_facture", "Quitter", nullptr));
        label_6->setText(QCoreApplication::translate("vr_facture", "Reste", nullptr));
        label_7->setText(QCoreApplication::translate("vr_facture", "Montant", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vr_facture: public Ui_vr_facture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VR_FACTURE_H
