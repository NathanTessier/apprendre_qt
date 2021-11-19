/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *TabImc;
    QWidget *InfoTab;
    QPushButton *SuitePushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *NomLabel;
    QLineEdit *NomEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *PrenomLabel;
    QLineEdit *PrenomEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SexeLabel;
    QRadioButton *FemmeRadioButton;
    QRadioButton *HommeRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *AgeLabel;
    QSpinBox *AgeSpinBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *PoidsLabel;
    QDoubleSpinBox *PoidsDoubleSpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *TailleLabel;
    QDoubleSpinBox *TailleDoubleSpinBox;
    QWidget *CalculTab;
    QTextEdit *textEditAfficheur;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *DevinePushButton;
    QPushButton *LorentzPushButton;
    QPushButton *Lorentz2PushButton;
    QPushButton *QuitterPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(545, 466);
        Widget->setMinimumSize(QSize(545, 466));
        TabImc = new QTabWidget(Widget);
        TabImc->setObjectName(QString::fromUtf8("TabImc"));
        TabImc->setGeometry(QRect(30, 20, 481, 361));
        InfoTab = new QWidget();
        InfoTab->setObjectName(QString::fromUtf8("InfoTab"));
        SuitePushButton = new QPushButton(InfoTab);
        SuitePushButton->setObjectName(QString::fromUtf8("SuitePushButton"));
        SuitePushButton->setGeometry(QRect(180, 240, 80, 24));
        widget = new QWidget(InfoTab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 50, 185, 189));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        NomLabel = new QLabel(widget);
        NomLabel->setObjectName(QString::fromUtf8("NomLabel"));

        horizontalLayout->addWidget(NomLabel);

        NomEdit = new QLineEdit(widget);
        NomEdit->setObjectName(QString::fromUtf8("NomEdit"));

        horizontalLayout->addWidget(NomEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        PrenomLabel = new QLabel(widget);
        PrenomLabel->setObjectName(QString::fromUtf8("PrenomLabel"));

        horizontalLayout_3->addWidget(PrenomLabel);

        PrenomEdit = new QLineEdit(widget);
        PrenomEdit->setObjectName(QString::fromUtf8("PrenomEdit"));

        horizontalLayout_3->addWidget(PrenomEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        SexeLabel = new QLabel(widget);
        SexeLabel->setObjectName(QString::fromUtf8("SexeLabel"));

        horizontalLayout_2->addWidget(SexeLabel);

        FemmeRadioButton = new QRadioButton(widget);
        FemmeRadioButton->setObjectName(QString::fromUtf8("FemmeRadioButton"));

        horizontalLayout_2->addWidget(FemmeRadioButton);

        HommeRadioButton = new QRadioButton(widget);
        HommeRadioButton->setObjectName(QString::fromUtf8("HommeRadioButton"));

        horizontalLayout_2->addWidget(HommeRadioButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        AgeLabel = new QLabel(widget);
        AgeLabel->setObjectName(QString::fromUtf8("AgeLabel"));

        horizontalLayout_4->addWidget(AgeLabel);

        AgeSpinBox = new QSpinBox(widget);
        AgeSpinBox->setObjectName(QString::fromUtf8("AgeSpinBox"));
        AgeSpinBox->setMinimum(1);
        AgeSpinBox->setMaximum(200);

        horizontalLayout_4->addWidget(AgeSpinBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        PoidsLabel = new QLabel(widget);
        PoidsLabel->setObjectName(QString::fromUtf8("PoidsLabel"));

        horizontalLayout_5->addWidget(PoidsLabel);

        PoidsDoubleSpinBox = new QDoubleSpinBox(widget);
        PoidsDoubleSpinBox->setObjectName(QString::fromUtf8("PoidsDoubleSpinBox"));
        PoidsDoubleSpinBox->setMinimum(15.000000000000000);
        PoidsDoubleSpinBox->setMaximum(300.000000000000000);
        PoidsDoubleSpinBox->setStepType(QAbstractSpinBox::DefaultStepType);

        horizontalLayout_5->addWidget(PoidsDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        TailleLabel = new QLabel(widget);
        TailleLabel->setObjectName(QString::fromUtf8("TailleLabel"));

        horizontalLayout_6->addWidget(TailleLabel);

        TailleDoubleSpinBox = new QDoubleSpinBox(widget);
        TailleDoubleSpinBox->setObjectName(QString::fromUtf8("TailleDoubleSpinBox"));
        TailleDoubleSpinBox->setMinimum(0.500000000000000);
        TailleDoubleSpinBox->setMaximum(3.000000000000000);

        horizontalLayout_6->addWidget(TailleDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_6);

        TabImc->addTab(InfoTab, QString());
        CalculTab = new QWidget();
        CalculTab->setObjectName(QString::fromUtf8("CalculTab"));
        textEditAfficheur = new QTextEdit(CalculTab);
        textEditAfficheur->setObjectName(QString::fromUtf8("textEditAfficheur"));
        textEditAfficheur->setGeometry(QRect(30, 29, 411, 181));
        widget1 = new QWidget(CalculTab);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 220, 307, 86));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        DevinePushButton = new QPushButton(widget1);
        DevinePushButton->setObjectName(QString::fromUtf8("DevinePushButton"));

        verticalLayout_2->addWidget(DevinePushButton);

        LorentzPushButton = new QPushButton(widget1);
        LorentzPushButton->setObjectName(QString::fromUtf8("LorentzPushButton"));

        verticalLayout_2->addWidget(LorentzPushButton);

        Lorentz2PushButton = new QPushButton(widget1);
        Lorentz2PushButton->setObjectName(QString::fromUtf8("Lorentz2PushButton"));

        verticalLayout_2->addWidget(Lorentz2PushButton);

        TabImc->addTab(CalculTab, QString());
        QuitterPushButton = new QPushButton(Widget);
        QuitterPushButton->setObjectName(QString::fromUtf8("QuitterPushButton"));
        QuitterPushButton->setGeometry(QRect(230, 410, 80, 24));

        retranslateUi(Widget);
        QObject::connect(QuitterPushButton, SIGNAL(clicked()), Widget, SLOT(close()));

        TabImc->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        SuitePushButton->setText(QCoreApplication::translate("Widget", "Suite", nullptr));
        NomLabel->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        PrenomLabel->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        SexeLabel->setText(QCoreApplication::translate("Widget", "Sexe", nullptr));
        FemmeRadioButton->setText(QCoreApplication::translate("Widget", "Femme", nullptr));
        HommeRadioButton->setText(QCoreApplication::translate("Widget", "Homme", nullptr));
        AgeLabel->setText(QCoreApplication::translate("Widget", "Age", nullptr));
        PoidsLabel->setText(QCoreApplication::translate("Widget", "Poids (kg)", nullptr));
        TailleLabel->setText(QCoreApplication::translate("Widget", "Taille (m)", nullptr));
        TabImc->setTabText(TabImc->indexOf(InfoTab), QCoreApplication::translate("Widget", "Infomations Personnelles", nullptr));
        DevinePushButton->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de devine", nullptr));
        LorentzPushButton->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de lorentz", nullptr));
        Lorentz2PushButton->setText(QCoreApplication::translate("Widget", "Poids id\303\251al formule de lorentz en fonction de l'age", nullptr));
        TabImc->setTabText(TabImc->indexOf(CalculTab), QCoreApplication::translate("Widget", "Calcul de poids id\303\251al", nullptr));
        QuitterPushButton->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
