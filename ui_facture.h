/********************************************************************************
** Form generated from reading UI file 'facture.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURE_H
#define UI_FACTURE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_facture
{
public:
    QLineEdit *lineEdit;
    QListView *listView;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *facture)
    {
        if (facture->objectName().isEmpty())
            facture->setObjectName("facture");
        facture->resize(852, 445);
        lineEdit = new QLineEdit(facture);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 30, 351, 41));
        listView = new QListView(facture);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(40, 140, 771, 271));
        listView->setFocusPolicy(Qt::WheelFocus);
        listView->setAutoFillBackground(false);
        listView->setFrameShadow(QFrame::Raised);
        listView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listView->setIconSize(QSize(24, 24));
        listView->setTextElideMode(Qt::ElideMiddle);
        listView->setMovement(QListView::Static);
        listView->setProperty("isWrapping", QVariant(false));
        listView->setLayoutMode(QListView::SinglePass);
        listView->setSpacing(5);
        listView->setViewMode(QListView::ListMode);
        listView->setModelColumn(0);
        listView->setSelectionRectVisible(false);
        pushButton = new QPushButton(facture);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(520, 30, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Ressources/chercher.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));
        label = new QLabel(facture);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 100, 171, 31));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(facture);

        QMetaObject::connectSlotsByName(facture);
    } // setupUi

    void retranslateUi(QDialog *facture)
    {
        facture->setWindowTitle(QCoreApplication::translate("facture", "Dialog", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("facture", "Choisir  le produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class facture: public Ui_facture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURE_H
