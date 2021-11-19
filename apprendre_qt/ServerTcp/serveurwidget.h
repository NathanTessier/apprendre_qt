#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QProcess>
#include <QHostInfo>
#include <QNetworkInterface>


QT_BEGIN_NAMESPACE
namespace Ui { class ServeurWidget; }
QT_END_NAMESPACE

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

private slots:
    void on_pushButton_LancementServeur_clicked();

    void onQTcpServer_newConnection();

    void onQTcpServer_readyRead();

    void onQTcpServer_disconnected();

    void onQProcess_readyReadStandardOutput();

private:
    Ui::ServeurWidget *ui;
    // QTcpSocket *socketClient;
    QList <QTcpSocket*> listeSocketClient;
    QTcpServer *socketServeur;
    //QProcess *process;
    QList <QProcess*> listeProcess;
};
#endif // SERVEURWIDGET_H
