/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWidget
{
public:
    QGroupBox *groupBox_ConnexionServ;
    QLabel *label_IPserv;
    QLabel *label_numPort;
    QLineEdit *lineEdit_ip;
    QLineEdit *lineEdit_numPort;
    QPushButton *pushButto_Quitter;
    QPushButton *pushButton_Connexion;
    QTextEdit *textEdit_EtatConnexion;
    QLabel *label_EtatConnexion;
    QGroupBox *groupBox_InfoClients;
    QPushButton *pushButton_NomOrdi;
    QPushButton *pushButton_NomUser;
    QPushButton *pushButton_Processeur;
    QPushButton *pushButton_Architecture;
    QLineEdit *lineEdit_nomOrdi;
    QLineEdit *lineEdit_Architecture;
    QLineEdit *lineEdit_nomUsers;
    QLineEdit *lineEdit_Processeur;

    void setupUi(QWidget *ClientWidget)
    {
        if (ClientWidget->objectName().isEmpty())
            ClientWidget->setObjectName(QString::fromUtf8("ClientWidget"));
        ClientWidget->resize(700, 440);
        groupBox_ConnexionServ = new QGroupBox(ClientWidget);
        groupBox_ConnexionServ->setObjectName(QString::fromUtf8("groupBox_ConnexionServ"));
        groupBox_ConnexionServ->setGeometry(QRect(40, 100, 631, 151));
        label_IPserv = new QLabel(groupBox_ConnexionServ);
        label_IPserv->setObjectName(QString::fromUtf8("label_IPserv"));
        label_IPserv->setGeometry(QRect(20, 40, 141, 16));
        label_numPort = new QLabel(groupBox_ConnexionServ);
        label_numPort->setObjectName(QString::fromUtf8("label_numPort"));
        label_numPort->setGeometry(QRect(20, 70, 171, 16));
        lineEdit_ip = new QLineEdit(groupBox_ConnexionServ);
        lineEdit_ip->setObjectName(QString::fromUtf8("lineEdit_ip"));
        lineEdit_ip->setGeometry(QRect(160, 40, 191, 24));
        lineEdit_numPort = new QLineEdit(groupBox_ConnexionServ);
        lineEdit_numPort->setObjectName(QString::fromUtf8("lineEdit_numPort"));
        lineEdit_numPort->setGeometry(QRect(190, 70, 161, 24));
        pushButto_Quitter = new QPushButton(groupBox_ConnexionServ);
        pushButto_Quitter->setObjectName(QString::fromUtf8("pushButto_Quitter"));
        pushButto_Quitter->setGeometry(QRect(20, 107, 80, 24));
        pushButton_Connexion = new QPushButton(groupBox_ConnexionServ);
        pushButton_Connexion->setObjectName(QString::fromUtf8("pushButton_Connexion"));
        pushButton_Connexion->setGeometry(QRect(271, 108, 80, 24));
        textEdit_EtatConnexion = new QTextEdit(groupBox_ConnexionServ);
        textEdit_EtatConnexion->setObjectName(QString::fromUtf8("textEdit_EtatConnexion"));
        textEdit_EtatConnexion->setGeometry(QRect(370, 61, 241, 70));
        label_EtatConnexion = new QLabel(groupBox_ConnexionServ);
        label_EtatConnexion->setObjectName(QString::fromUtf8("label_EtatConnexion"));
        label_EtatConnexion->setGeometry(QRect(370, 41, 121, 16));
        groupBox_InfoClients = new QGroupBox(ClientWidget);
        groupBox_InfoClients->setObjectName(QString::fromUtf8("groupBox_InfoClients"));
        groupBox_InfoClients->setGeometry(QRect(40, 250, 631, 161));
        pushButton_NomOrdi = new QPushButton(groupBox_InfoClients);
        pushButton_NomOrdi->setObjectName(QString::fromUtf8("pushButton_NomOrdi"));
        pushButton_NomOrdi->setGeometry(QRect(10, 30, 171, 24));
        pushButton_NomUser = new QPushButton(groupBox_InfoClients);
        pushButton_NomUser->setObjectName(QString::fromUtf8("pushButton_NomUser"));
        pushButton_NomUser->setGeometry(QRect(10, 60, 171, 24));
        pushButton_Processeur = new QPushButton(groupBox_InfoClients);
        pushButton_Processeur->setObjectName(QString::fromUtf8("pushButton_Processeur"));
        pushButton_Processeur->setGeometry(QRect(10, 120, 171, 24));
        pushButton_Architecture = new QPushButton(groupBox_InfoClients);
        pushButton_Architecture->setObjectName(QString::fromUtf8("pushButton_Architecture"));
        pushButton_Architecture->setGeometry(QRect(10, 90, 171, 24));
        lineEdit_nomOrdi = new QLineEdit(groupBox_InfoClients);
        lineEdit_nomOrdi->setObjectName(QString::fromUtf8("lineEdit_nomOrdi"));
        lineEdit_nomOrdi->setGeometry(QRect(190, 30, 421, 24));
        lineEdit_Architecture = new QLineEdit(groupBox_InfoClients);
        lineEdit_Architecture->setObjectName(QString::fromUtf8("lineEdit_Architecture"));
        lineEdit_Architecture->setGeometry(QRect(190, 90, 421, 24));
        lineEdit_nomUsers = new QLineEdit(groupBox_InfoClients);
        lineEdit_nomUsers->setObjectName(QString::fromUtf8("lineEdit_nomUsers"));
        lineEdit_nomUsers->setGeometry(QRect(190, 60, 421, 24));
        lineEdit_Processeur = new QLineEdit(groupBox_InfoClients);
        lineEdit_Processeur->setObjectName(QString::fromUtf8("lineEdit_Processeur"));
        lineEdit_Processeur->setGeometry(QRect(190, 120, 421, 24));

        retranslateUi(ClientWidget);
        QObject::connect(pushButto_Quitter, SIGNAL(clicked()), ClientWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ClientWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientWidget)
    {
        ClientWidget->setWindowTitle(QCoreApplication::translate("ClientWidget", "ClientWidget", nullptr));
        groupBox_ConnexionServ->setTitle(QCoreApplication::translate("ClientWidget", "Connexion au serveur", nullptr));
        label_IPserv->setText(QCoreApplication::translate("ClientWidget", "Adresse IP du serveur :", nullptr));
        label_numPort->setText(QCoreApplication::translate("ClientWidget", "Num\303\251ro de port du serveur :", nullptr));
        lineEdit_ip->setText(QCoreApplication::translate("ClientWidget", "172.18.58.83", nullptr));
        lineEdit_numPort->setText(QCoreApplication::translate("ClientWidget", "1025", nullptr));
        pushButto_Quitter->setText(QCoreApplication::translate("ClientWidget", "Quitter", nullptr));
        pushButton_Connexion->setText(QCoreApplication::translate("ClientWidget", "Connexion", nullptr));
        label_EtatConnexion->setText(QCoreApplication::translate("ClientWidget", "Etat de la connexion", nullptr));
        groupBox_InfoClients->setTitle(QCoreApplication::translate("ClientWidget", "Informations Clients", nullptr));
        pushButton_NomOrdi->setText(QCoreApplication::translate("ClientWidget", "Nom de l'ordinateur distant", nullptr));
        pushButton_NomUser->setText(QCoreApplication::translate("ClientWidget", "Nom de l'utilisateur", nullptr));
        pushButton_Processeur->setText(QCoreApplication::translate("ClientWidget", "OS de l'ordinateur", nullptr));
        pushButton_Architecture->setText(QCoreApplication::translate("ClientWidget", "Architecture processeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWidget: public Ui_ClientWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
