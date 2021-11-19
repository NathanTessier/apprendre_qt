/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QLabel *label_numPort;
    QSpinBox *spinBox_numPort;
    QPushButton *pushButton_LancementServeur;
    QLabel *label_Clients;
    QTextEdit *textEdit_Clients;
    QPushButton *pushButton_Quitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(399, 392);
        label_numPort = new QLabel(ServeurWidget);
        label_numPort->setObjectName(QString::fromUtf8("label_numPort"));
        label_numPort->setGeometry(QRect(41, 76, 101, 16));
        spinBox_numPort = new QSpinBox(ServeurWidget);
        spinBox_numPort->setObjectName(QString::fromUtf8("spinBox_numPort"));
        spinBox_numPort->setGeometry(QRect(191, 72, 141, 25));
        spinBox_numPort->setMaximum(2000);
        spinBox_numPort->setValue(1025);
        pushButton_LancementServeur = new QPushButton(ServeurWidget);
        pushButton_LancementServeur->setObjectName(QString::fromUtf8("pushButton_LancementServeur"));
        pushButton_LancementServeur->setGeometry(QRect(41, 106, 291, 24));
        label_Clients = new QLabel(ServeurWidget);
        label_Clients->setObjectName(QString::fromUtf8("label_Clients"));
        label_Clients->setGeometry(QRect(41, 139, 58, 16));
        textEdit_Clients = new QTextEdit(ServeurWidget);
        textEdit_Clients->setObjectName(QString::fromUtf8("textEdit_Clients"));
        textEdit_Clients->setGeometry(QRect(41, 163, 291, 131));
        pushButton_Quitter = new QPushButton(ServeurWidget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));
        pushButton_Quitter->setGeometry(QRect(40, 300, 291, 24));

        retranslateUi(ServeurWidget);
        QObject::connect(pushButton_Quitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QCoreApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        label_numPort->setText(QCoreApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButton_LancementServeur->setText(QCoreApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        label_Clients->setText(QCoreApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
