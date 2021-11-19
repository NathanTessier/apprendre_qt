#ifndef FRANCE_H
#define FRANCE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class France; }
QT_END_NAMESPACE

class France : public QWidget
{
    Q_OBJECT

public:
    France(QWidget *parent = nullptr);
    ~France();

private slots:
    void on_pushButton_clicked();

    void on_comboBoxRegions_currentIndexChanged(int index);

    void on_comboBoxDepartements_currentIndexChanged(int index);

private:
    Ui::France *ui;

};
#endif // FRANCE_H
