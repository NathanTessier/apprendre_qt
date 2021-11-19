#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->TabImc->setTabEnabled(1,false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::afficherInfos()
{


    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
    poids = ui->PoidsDoubleSpinBox->value();
    taille = ui->TailleDoubleSpinBox->value();
    nom = ui->NomEdit->text();
    prenom = ui->PrenomEdit->text();
    age = ui->AgeSpinBox->value();


    // affichage message de bienvenue
    ui->textEditAfficheur->append("bonjour "+nom+" "+prenom);
    // calcul de l'imc
    imc=poids/(taille*taille);
    // affichage de l'imc
    ui->textEditAfficheur->append("Votre indice de masse corporel est de : "+QString::number(imc));
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
        indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    ui->textEditAfficheur->append("Votre corpulence est de : "+corpulences[indiceCorpulence]);
};






void Widget::on_SuitePushButton_clicked()
{
    ui->TabImc->setTabEnabled(1,true);
     ui->textEditAfficheur->clear();
    afficherInfos();
    ui->TabImc->setCurrentIndex(1);


}

void Widget::on_DevinePushButton_clicked()
{
    double poidsIdeal = 0;
    if (ui->FemmeRadioButton->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->HommeRadioButton->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de devine : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
            ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
            ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_LorentzPushButton_clicked()
{
    double poidsIdeal = 0;
    if (ui->FemmeRadioButton->isChecked()) {
        poidsIdeal = taille*100-100-((taille*100-150)/2.5);
    }
    if (ui->HommeRadioButton->isChecked()) {
        poidsIdeal = taille*100-100-((taille*100-150)/4);
    }
    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de lorentz : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
            ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
            ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}

void Widget::on_Lorentz2PushButton_clicked()
{
    double poidsIdeal = 0;
    poidsIdeal = 50+((taille*100-150)/4)+((age-20)/4);

    if (poidsIdeal > 0) {
        ui->textEditAfficheur->append("\nVotre poids ideal avec la formule de lorentz avec l'age : " + QString::number(poidsIdeal) + " kg\n");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
            ui->textEditAfficheur->append("\nVous devez perdre "+QString::number(ecart)+" kg\n");
        }
        else {
            ui->textEditAfficheur->append("\nVous devez prendre "+QString::number(-ecart)+" kg\n");
        }
    }
}
