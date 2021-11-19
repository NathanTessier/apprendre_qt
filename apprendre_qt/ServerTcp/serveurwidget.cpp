/*#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketServeur =new QTcpServer(this);
    socketServeur->setMaxPendingConnections(1);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}


void ServeurWidget::on_pushButton_LancementServeur_clicked()
{
    if(!socketServeur->listen(QHostAddress::Any,static_cast<quint16>(ui->spinBox_numPort->value()))){
        QString message = "impossible de démarrer le serveur" + socketServeur->errorString();
        ui->textEdit_Clients->append(message);
        close();
    }
    else{
        ui->textEdit_Clients->append("Numero du port : " + QString::number(socketServeur->serverPort()));
        connect(socketServeur,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
        ui->pushButton_LancementServeur->setEnabled(false);
        ui->spinBox_numPort->setEnabled(false);
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socketClient=socketServeur->nextPendingConnection();
    connect(socketClient,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpServer_readyRead);
    QHostAddress adresseClient = socketClient->peerAddress();
    ui->textEdit_Clients->append(adresseClient.toString());

    process = new QProcess(this);
    connect(process,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);

}

void ServeurWidget::onQTcpServer_readyRead()
{

    if(socketClient->bytesAvailable() )
    {
        QByteArray temps = socketClient->readAll();
        QChar  commande = temps.at(0);
        QString message = "com recu de "+socketClient->peerAddress().toString()+" : ";
        message += commande;
        ui->textEdit_Clients->append(message);
        QString reponse;
        switch(commande.toLatin1()){

        case 'u' : reponse = getenv("USER");
            socketClient->write(reponse.toLatin1());
            break;
        case 'c' : reponse = QHostInfo::localHostName();
            socketClient->write(reponse.toLatin1());
            break;
        case 'o' :
            process->start("uname");
        case 'a' :
            process->start("uname",QStringList("-p"));
        }
    }

}

void ServeurWidget::onQTcpServer_disconnected()
{
    ui->pushButton_LancementServeur->setText("Connexion");
    ui->pushButton_LancementServeur->setEnabled(true);
    ui->spinBox_numPort->setEnabled(true);
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty()){
       QString message = "Rep envoyé de"+socketClient->peerAddress().toString()+" : " +reponse;
       ui->textEdit_Clients->append(message);
       socketClient->write(reponse.toLatin1());
    }
}*/
#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);
    socketServeur =new QTcpServer(this);
    socketServeur->setMaxPendingConnections(10);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socketServeur;
}


void ServeurWidget::on_pushButton_LancementServeur_clicked()
{
    if(!socketServeur->listen(QHostAddress::Any,static_cast<quint16>(ui->spinBox_numPort->value()))){
        QString message = "impossible de démarrer le serveur" + socketServeur->errorString();
        ui->textEdit_Clients->append(message);
        close();
    }
    else{
        QList<QHostAddress> listeAdresse = QNetworkInterface::allAddresses();
        for (int i = 0; i <listeAdresse.size();i++){
            if(listeAdresse.at(i).toIPv4Address())
                ui->textEdit_Clients->append((listeAdresse.at(i).toString()));
        }
        ui->textEdit_Clients->append("Numero du port : " + QString::number(socketServeur->serverPort()));
        connect(socketServeur,&QTcpServer::newConnection,this,&ServeurWidget::onQTcpServer_newConnection);
        ui->pushButton_LancementServeur->setEnabled(false);
        ui->spinBox_numPort->setEnabled(false);
    }
}

void ServeurWidget::onQTcpServer_newConnection()
{

    QTcpSocket *client;
    client=socketServeur->nextPendingConnection();
    connect(client,&QTcpSocket::readyRead,this,&ServeurWidget::onQTcpServer_readyRead);
    QHostAddress adresseClient = client->peerAddress();
    ui->textEdit_Clients->append(adresseClient.toString());
    listeSocketClient.append(client);
    QProcess* process = new QProcess(this);
    connect(process,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutput);
    listeProcess.append(process);
}

void ServeurWidget::onQTcpServer_readyRead()
{
    QString nom;
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    int indexProcess=listeSocketClient.indexOf(client);
    if(client->bytesAvailable() )
    {
        QByteArray temps = client->readAll();
        QChar  commande = temps.at(0);
        QString message = "com recu de "+client->peerAddress().toString()+" : ";
        message += commande;
        ui->textEdit_Clients->append(message);
        QString reponse;

        switch(commande.toLatin1()){

        case 'u' : reponse = getenv("USER");

            client->write(reponse.toUtf8());

            break;
        case 'c' : reponse = QHostInfo::localHostName();

            client->write(reponse.toLatin1());
            break;
        case 'o' :

            listeProcess.at(indexProcess)->start("uname",QStringList("-p"));

        case 'a' :
            listeProcess.at(indexProcess)->start("uname");

        }
        qDebug()<<"reponse : "<<reponse;
    }

}

void ServeurWidget::onQTcpServer_disconnected()
{
    QTcpSocket *client=qobject_cast<QTcpSocket*>(sender());
    ui->textEdit_Clients->append("Deconnexion de "+client->peerAddress().toString());
    int index=listeSocketClient.indexOf(client);
    listeSocketClient.removeAt(index);
    listeProcess.removeAt(index);
    ui->pushButton_LancementServeur->setText("Connexion");
    ui->pushButton_LancementServeur->setEnabled(true);
    ui->spinBox_numPort->setEnabled(true);
}

void ServeurWidget::onQProcess_readyReadStandardOutput()
{
    QProcess *process=qobject_cast<QProcess*>(sender());
    int indexClient=listeProcess.indexOf(process);
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Rep envoyé de " +listeSocketClient.at(indexClient)->peerAddress().toString()+" : " +reponse;
        ui->textEdit_Clients->append(message);
        listeSocketClient.at(indexClient)->write(reponse.toUtf8());
    }
}
