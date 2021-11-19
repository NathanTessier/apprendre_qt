#include "clientwidget.h"
#include "ui_clientwidget.h"


ClientWidget::ClientWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socketDeDialogueAvecServeur = new QTcpSocket (this);
    connect(socketDeDialogueAvecServeur,QOverload<QAbstractSocket::SocketError>::of(&QAbstractSocket::error),this,
            &ClientWidget::onQTcpSocket_error);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::connected,this,&ClientWidget::onQTcpSocket_connected);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::disconnected,this,&ClientWidget::onQTcpSocket_disconnected);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::hostFound,this,&ClientWidget::onQTcpSocket_hostFound);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::stateChanged,this,&ClientWidget::onQTcpSocket_stateChanged);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::aboutToClose,this,&ClientWidget::onQTcpSocket_aboutToClose);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::bytesWritten,this,&ClientWidget::onQTcpSocket_bytesWritten);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readChannelFinished,this,&ClientWidget::onQTcpSocket_readChannelFinished);
    connect(socketDeDialogueAvecServeur,&QTcpSocket::readyRead,this,&ClientWidget::onQTcpSocket_readyRead);
    ui->lineEdit_ip->setEnabled(true);
    ui->lineEdit_numPort->setEnabled(true);
    ui->groupBox_InfoClients->setEnabled(false);
}

ClientWidget::~ClientWidget()
{
    delete ui;
}


void ClientWidget::on_pushButton_Connexion_clicked()
{
    if(ui->pushButton_Connexion->text()=="Connexion"){
        socketDeDialogueAvecServeur->connectToHost(ui->lineEdit_ip->text(),ui->lineEdit_numPort->text().toInt());
    }
    else{
        socketDeDialogueAvecServeur->disconnectFromHost();
    }
}

void ClientWidget::on_pushButton_NomOrdi_clicked()
{
    typeDeDemande="c";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_NomUser_clicked()
{
    typeDeDemande="u";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_Architecture_clicked()
{
    typeDeDemande="a";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButton_Processeur_clicked()
{
    typeDeDemande="o";
    socketDeDialogueAvecServeur->write(typeDeDemande.toLatin1());
}
void ClientWidget::onQTcpSocket_connected()
{

    ui->textEdit_EtatConnexion->append("Connected");
    ui->pushButton_Connexion->setText("Deconnexion");
    ui->lineEdit_ip->setEnabled(false);
    ui->lineEdit_numPort->setEnabled(false);
    ui->groupBox_InfoClients->setEnabled(true);
    ui->lineEdit_Architecture->clear();
    ui->lineEdit_nomUsers->clear();
    ui->lineEdit_nomOrdi->clear();
    ui->lineEdit_Processeur->clear();

}

void ClientWidget::onQTcpSocket_disconnected()
{
    ui->textEdit_EtatConnexion->append("Disconnected");
    ui->pushButton_Connexion->setText("Connexion");
    ui->lineEdit_ip->setEnabled(true);
    ui->lineEdit_numPort->setEnabled(true);
    ui->groupBox_InfoClients->setEnabled(false);
    ui->lineEdit_Architecture->clear();
    ui->lineEdit_nomUsers->clear();
    ui->lineEdit_nomOrdi->clear();
    ui->lineEdit_Processeur->clear();

}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEdit_EtatConnexion->append(socketDeDialogueAvecServeur->errorString());
}
void ClientWidget::onQTcpSocket_hostFound()
{
    ui->textEdit_EtatConnexion->append("hostFound");
}

void ClientWidget::onQTcpSocket_readyRead()
{
    QByteArray buffer;
    if(socketDeDialogueAvecServeur->bytesAvailable() >0 )
    {
        buffer = socketDeDialogueAvecServeur->readAll();
    }
    if(typeDeDemande=="u"){
        ui->lineEdit_nomUsers->setText(buffer.data());
    }
    if(typeDeDemande=="c"){
        ui->lineEdit_nomOrdi->setText(buffer.data());
    }
    if(typeDeDemande=="o"){
        ui->lineEdit_Processeur->setText(buffer.data());
    }
    if(typeDeDemande=="a"){
        ui->lineEdit_Architecture->setText(buffer.data());
    }
}

void ClientWidget::onQTcpSocket_stateChanged(QAbstractSocket::SocketState socketState){

    QString etat;
    switch (socketState) {
    case QAbstractSocket::UnconnectedState:etat="The socket is not connected.";break;
    case QAbstractSocket::HostLookupState:etat="The socket is performing a host name lookup.";break;
    case QAbstractSocket::ConnectingState:etat="The socket has started establishing a connection.";break;
    case QAbstractSocket::ConnectedState:etat="A connection is established.";break;
    case QAbstractSocket::BoundState:etat="The socket is bound to an address and port.";break;
    case QAbstractSocket::ClosingState:etat="The socket is about to close (data may still be waiting to be written).";break;
    case QAbstractSocket::ListeningState:etat="For internal use only.";break;

    }
    ui->textEdit_EtatConnexion->append(etat);
}

void ClientWidget::onQTcpSocket_aboutToClose()
{

}



void ClientWidget::onQTcpSocket_bytesWritten(quint64 bytes)
{

}

void ClientWidget::onQTcpSocket_readChannelFinished()
{

}






































