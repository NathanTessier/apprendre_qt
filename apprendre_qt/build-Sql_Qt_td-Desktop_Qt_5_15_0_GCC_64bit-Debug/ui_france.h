/********************************************************************************
** Form generated from reading UI file 'france.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRANCE_H
#define UI_FRANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_France
{
public:
    QLabel *label_numDepartement;
    QLabel *label_nomDepartement;
    QLineEdit *lineEdit_numDepartement;
    QPushButton *pushButton;
    QComboBox *comboBoxRegions;
    QComboBox *comboBoxDepartements;
    QComboBox *comboBoxVilles;

    void setupUi(QWidget *France)
    {
        if (France->objectName().isEmpty())
            France->setObjectName(QString::fromUtf8("France"));
        France->resize(800, 600);
        label_numDepartement = new QLabel(France);
        label_numDepartement->setObjectName(QString::fromUtf8("label_numDepartement"));
        label_numDepartement->setGeometry(QRect(70, 280, 211, 16));
        label_nomDepartement = new QLabel(France);
        label_nomDepartement->setObjectName(QString::fromUtf8("label_nomDepartement"));
        label_nomDepartement->setGeometry(QRect(70, 320, 211, 16));
        lineEdit_numDepartement = new QLineEdit(France);
        lineEdit_numDepartement->setObjectName(QString::fromUtf8("lineEdit_numDepartement"));
        lineEdit_numDepartement->setGeometry(QRect(290, 277, 113, 24));
        pushButton = new QPushButton(France);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 277, 181, 24));
        comboBoxRegions = new QComboBox(France);
        comboBoxRegions->setObjectName(QString::fromUtf8("comboBoxRegions"));
        comboBoxRegions->setGeometry(QRect(70, 199, 161, 24));
        comboBoxRegions->setEditable(true);
        comboBoxDepartements = new QComboBox(France);
        comboBoxDepartements->setObjectName(QString::fromUtf8("comboBoxDepartements"));
        comboBoxDepartements->setGeometry(QRect(245, 199, 191, 24));
        comboBoxDepartements->setEditable(true);
        comboBoxVilles = new QComboBox(France);
        comboBoxVilles->setObjectName(QString::fromUtf8("comboBoxVilles"));
        comboBoxVilles->setGeometry(QRect(450, 199, 141, 24));
        comboBoxVilles->setEditable(true);

        retranslateUi(France);

        QMetaObject::connectSlotsByName(France);
    } // setupUi

    void retranslateUi(QWidget *France)
    {
        France->setWindowTitle(QCoreApplication::translate("France", "France", nullptr));
        label_numDepartement->setText(QCoreApplication::translate("France", "Donnez un num\303\251ro de d\303\251partement", nullptr));
        label_nomDepartement->setText(QCoreApplication::translate("France", "Nom du d\303\251partement", nullptr));
        pushButton->setText(QCoreApplication::translate("France", "Avoir le nom du d\303\251partement", nullptr));
        comboBoxRegions->setCurrentText(QCoreApplication::translate("France", "Choisissez une r\303\251gion", nullptr));
        comboBoxDepartements->setCurrentText(QCoreApplication::translate("France", "Choisissez un d\303\251partement", nullptr));
        comboBoxVilles->setCurrentText(QCoreApplication::translate("France", "Choisissez une ville", nullptr));
    } // retranslateUi

};

namespace Ui {
    class France: public Ui_France {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRANCE_H
