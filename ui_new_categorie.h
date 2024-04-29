/********************************************************************************
** Form generated from reading UI file 'new_categorie.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_CATEGORIE_H
#define UI_NEW_CATEGORIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_New_categorie
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *New_categorie)
    {
        if (New_categorie->objectName().isEmpty())
            New_categorie->setObjectName("New_categorie");
        New_categorie->resize(583, 193);
        New_categorie->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        lineEdit = new QLineEdit(New_categorie);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 30, 331, 41));
        label = new QLabel(New_categorie);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 161, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(New_categorie);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(390, 140, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        pushButton_2 = new QPushButton(New_categorie);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 140, 141, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        retranslateUi(New_categorie);

        QMetaObject::connectSlotsByName(New_categorie);
    } // setupUi

    void retranslateUi(QDialog *New_categorie)
    {
        New_categorie->setWindowTitle(QCoreApplication::translate("New_categorie", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("New_categorie", "Nom de la categorie", nullptr));
        pushButton->setText(QCoreApplication::translate("New_categorie", "Ajouter", nullptr));
        pushButton_2->setText(QCoreApplication::translate("New_categorie", "Fermer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class New_categorie: public Ui_New_categorie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_CATEGORIE_H
