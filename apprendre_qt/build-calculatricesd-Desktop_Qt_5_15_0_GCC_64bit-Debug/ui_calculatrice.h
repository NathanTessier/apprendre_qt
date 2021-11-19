/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton6;
    QPushButton *pushButton0;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButton5;
    QPushButton *pushButton1;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonClear;
    QLineEdit *lineEditAfficheur;
    QPushButton *pushButton4;
    QPushButton *pushButton2;
    QPushButton *pushButton7;
    QPushButton *pushButtonDiviser;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonMoins;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName(QString::fromUtf8("Calculatrice"));
        Calculatrice->resize(484, 501);
        layoutWidget = new QWidget(Calculatrice);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 451, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton6 = new QPushButton(layoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButton0 = new QPushButton(layoutWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton3 = new QPushButton(layoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(layoutWidget);
        pushButtonMultiplier->setObjectName(QString::fromUtf8("pushButtonMultiplier"));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButton5 = new QPushButton(layoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton1 = new QPushButton(layoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButtonPlus = new QPushButton(layoutWidget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));

        gridLayout->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 4, 0, 1, 1);

        lineEditAfficheur = new QLineEdit(layoutWidget);
        lineEditAfficheur->setObjectName(QString::fromUtf8("lineEditAfficheur"));
        lineEditAfficheur->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);

        pushButton4 = new QPushButton(layoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton7 = new QPushButton(layoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButtonDiviser = new QPushButton(layoutWidget);
        pushButtonDiviser->setObjectName(QString::fromUtf8("pushButtonDiviser"));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);

        pushButton8 = new QPushButton(layoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton9 = new QPushButton(layoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonEgal = new QPushButton(layoutWidget);
        pushButtonEgal->setObjectName(QString::fromUtf8("pushButtonEgal"));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonMoins = new QPushButton(layoutWidget);
        pushButtonMoins->setObjectName(QString::fromUtf8("pushButtonMoins"));

        gridLayout->addWidget(pushButtonMoins, 2, 3, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QCoreApplication::translate("Calculatrice", "Calculatrice", nullptr));
        pushButton6->setText(QCoreApplication::translate("Calculatrice", "6", nullptr));
        pushButton0->setText(QCoreApplication::translate("Calculatrice", "0", nullptr));
        pushButton3->setText(QCoreApplication::translate("Calculatrice", "3", nullptr));
        pushButtonMultiplier->setText(QCoreApplication::translate("Calculatrice", "*", nullptr));
        pushButton5->setText(QCoreApplication::translate("Calculatrice", "5", nullptr));
        pushButton1->setText(QCoreApplication::translate("Calculatrice", "1", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("Calculatrice", "+", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("Calculatrice", "C", nullptr));
        lineEditAfficheur->setText(QString());
        lineEditAfficheur->setPlaceholderText(QCoreApplication::translate("Calculatrice", "affichage des op\303\251ratons", nullptr));
        pushButton4->setText(QCoreApplication::translate("Calculatrice", "4", nullptr));
        pushButton2->setText(QCoreApplication::translate("Calculatrice", "2", nullptr));
        pushButton7->setText(QCoreApplication::translate("Calculatrice", "7", nullptr));
        pushButtonDiviser->setText(QCoreApplication::translate("Calculatrice", "/", nullptr));
        pushButton8->setText(QCoreApplication::translate("Calculatrice", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("Calculatrice", "9", nullptr));
        pushButtonEgal->setText(QCoreApplication::translate("Calculatrice", "=", nullptr));
        pushButtonMoins->setText(QCoreApplication::translate("Calculatrice", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
