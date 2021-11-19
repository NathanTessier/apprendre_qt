#include "france.h"
#include "ui_france.h"
#include <QSqlDatabase>
#include <QtDebug>
#include <QSqlError>
#include <QString>
#include <QSqlQuery>

France::France(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::France)
{
    ui->setupUi(this);
    QSqlDatabase bd;
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.7");
    bd.setDatabaseName("france2018");
    bd.setUserName("snir");
    bd.setPassword("snir");
    if(!bd.open()){
        qDebug()<<"pb acces bd"<<bd.lastError();
    }
    else{
        qDebug()<<"pb acces bd";
    }

}

France::~France()
{
    delete ui;
}


void France::on_pushButton_clicked()
{
    QString numero = ui->lineEdit_numDepartement->text();
    QSqlQuery requete;
    requete.prepare("select name from departments WHERE code = :num ; ");
    requete.bindValue(":num",numero);
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    else{
        QString nomDep;
        while(requete.next()){
            nomDep=requete.value("name").toString();
            ui->label_nomDepartement->setText(nomDep);
        }
    }


}

void France::on_comboBoxRegions_currentIndexChanged(int index)
{
    // recupere l'id de la region
        QString idRegion=ui->comboBoxRegions->itemData(index).toString();
        // vider la liste des departements
        ui->comboBoxDepartements->clear();
        ui->comboBoxDepartements->addItem("Choisissez un département");
}

void France::on_comboBoxDepartements_currentIndexChanged(int index)
{
    // recupere l'id de la region
        QString idRegion=ui->comboBoxDepartements->itemData(index).toString();
        // vider la liste des departements
        ui->comboBoxVilles->clear();
        ui->comboBoxVilles->addItem("Choisissez un département");
}
