#include "calculatrice.h"
#include "ui_calculatrice.h"
#include <QScriptEngine>
#include <QString>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
    int colonne = 0, ligne = 0;
    grille = new QGridLayout();
    afficheur = new QLineEdit();
    afficheur ->setReadOnly(true);
    afficheur ->setAlignment(Qt::AlignRight);
    grille->addWidget(afficheur,ligne,colonne,1,4);
    ligne = 3;

    for (int i = 0; i < 16; ++i) {
        touche[i] = new QPushButton();
        connect(touche[i],&QPushButton::clicked,this,&Calculatrice::onQPushButtonClicked);
        touche[i]->setText(tableDesSymboles[i]);
        if((i>0) && (i<10)){
            grille->addWidget(touche[i],ligne,colonne);
            colonne++;
            if(colonne==3){
                colonne=0;
                ligne--;
            }
        }
    }
    grille->addWidget(touche[0],4,1);
    grille->addWidget(touche[10],4,0);
    grille->addWidget(touche[11],4,2);

    ligne =4;
    for (int i=12;i<16;i++){

        grille->addWidget(touche[i],ligne,3);
        ligne--;

    }
    this->setLayout(grille);

}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::onQPushButtonClicked()
{
    QPushButton *touche;
    touche = qobject_cast<QPushButton*>(sender());
    QString val=touche->text();
    if(val =="c"){
        afficheur->clear();
    }else{
        if(val == "="){
            QScriptEngine expression;
            afficheur->setText(expression.evaluate(afficheur->text()).toString());
        }
        else{
            afficheur->insert((val));
        }
    }
}
