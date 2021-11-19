#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculatrice; }
QT_END_NAMESPACE

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private:
    void onQPushButtonClicked();
    Ui::Calculatrice *ui;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QPushButton *touche[16];
    const QString tableDesSymboles[16]={"0","1","2","3","4","5","6","7","8","9","c","=","/","*","-","+"};
};
#endif // CALCULATRICE_H
