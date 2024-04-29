/********************************************************************************
** Form generated from reading UI file 'identification.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTIFICATION_H
#define UI_IDENTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_identification
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *codePinLabel;
    QLineEdit *codePinLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *nomLabel;
    QLineEdit *nomLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *identification)
    {
        if (identification->objectName().isEmpty())
            identification->setObjectName("identification");
        identification->resize(1251, 588);
        identification->setStyleSheet(QString::fromUtf8("QWidget{background-color: rgb(255, 255, 255);}\n"
"QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 0, 0, 255), stop:0.479904 rgba(255, 0, 0, 255), stop:0.522685 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255))"));
        centralwidget = new QWidget(identification);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(325, 11, 681, 431));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: italic 20pt \"Roman\";\n"
"text-decoration: underline;\n"
"color: rgb(0, 0, 0);\n"
"color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(245, 224, 176, 255), stop:0.09 rgba(246, 189, 237, 255), stop:0.14 rgba(194, 207, 246, 255), stop:0.19 rgba(184, 160, 168, 255), stop:0.25 rgba(171, 186, 248, 255), stop:0.32 rgba(243, 248, 224, 255), stop:0.385 rgba(249, 162, 183, 255), stop:0.47 rgba(100, 115, 124, 255), st"
                        "op:0.58 rgba(251, 205, 202, 255), stop:0.65 rgba(170, 128, 185, 255), stop:0.75 rgba(252, 222, 204, 255), stop:0.805 rgba(206, 122, 218, 255), stop:0.86 rgba(254, 223, 175, 255), stop:0.91 rgba(254, 236, 244, 255), stop:1 rgba(255, 191, 221, 255));"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(600, 195));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        horizontalLayout_5->addWidget(pushButton);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        gridLayout->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        codePinLabel = new QLabel(groupBox);
        codePinLabel->setObjectName("codePinLabel");

        horizontalLayout_3->addWidget(codePinLabel);

        codePinLineEdit = new QLineEdit(groupBox);
        codePinLineEdit->setObjectName("codePinLineEdit");
        codePinLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(codePinLineEdit);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        nomLabel = new QLabel(groupBox);
        nomLabel->setObjectName("nomLabel");

        horizontalLayout->addWidget(nomLabel);

        nomLineEdit = new QLineEdit(groupBox);
        nomLineEdit->setObjectName("nomLineEdit");

        horizontalLayout->addWidget(nomLineEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        comboBox_2 = new QComboBox(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Ressources/person.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_2->addItem(icon, QString());
        comboBox_2->addItem(icon, QString());
        comboBox_2->addItem(icon, QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(250, 0));

        horizontalLayout_4->addWidget(comboBox_2);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        identification->setCentralWidget(centralwidget);
        menubar = new QMenuBar(identification);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1251, 25));
        identification->setMenuBar(menubar);
        statusbar = new QStatusBar(identification);
        statusbar->setObjectName("statusbar");
        identification->setStatusBar(statusbar);

        retranslateUi(identification);

        QMetaObject::connectSlotsByName(identification);
    } // setupUi

    void retranslateUi(QMainWindow *identification)
    {
        identification->setWindowTitle(QCoreApplication::translate("identification", "accueil", nullptr));
        label->setText(QCoreApplication::translate("identification", "POS SYSTEM", nullptr));
        groupBox->setTitle(QCoreApplication::translate("identification", "Identification", nullptr));
        pushButton_2->setText(QCoreApplication::translate("identification", "Quitter", nullptr));
        pushButton->setText(QCoreApplication::translate("identification", "se connecter", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("identification", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        codePinLabel->setText(QCoreApplication::translate("identification", "code pin ", nullptr));
        nomLabel->setText(QCoreApplication::translate("identification", "Nom", nullptr));
        label_5->setText(QCoreApplication::translate("identification", "poste", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("identification", "admin", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("identification", "personnel", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("identification", "caissier", nullptr));

    } // retranslateUi

};

namespace Ui {
    class identification: public Ui_identification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENTIFICATION_H
