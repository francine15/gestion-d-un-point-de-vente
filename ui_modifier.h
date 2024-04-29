/********************************************************************************
** Form generated from reading UI file 'modifier.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFIER_H
#define UI_MODIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modifier
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QComboBox *comboBox;

    void setupUi(QDialog *modifier)
    {
        if (modifier->objectName().isEmpty())
            modifier->setObjectName("modifier");
        modifier->resize(515, 294);
        modifier->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        pushButton = new QPushButton(modifier);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 210, 111, 51));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(modifier);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 220, 111, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label = new QLabel(modifier);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 171, 61));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        label->setAlignment(Qt::AlignCenter);
        comboBox = new QComboBox(modifier);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(250, 60, 221, 41));

        retranslateUi(modifier);

        QMetaObject::connectSlotsByName(modifier);
    } // setupUi

    void retranslateUi(QDialog *modifier)
    {
        modifier->setWindowTitle(QCoreApplication::translate("modifier", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("modifier", "Modifier", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modifier", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("modifier", "Nom produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifier: public Ui_modifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFIER_H
