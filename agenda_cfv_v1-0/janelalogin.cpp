#include "janelalogin.h"
#include "ui_janelalogin.h"

QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

JanelaLogin::JanelaLogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::JanelaLogin)
{
    ui->setupUi(this);

    bancoDeDados.setDatabaseName("/home/jorge/Documentos/Projetos_QT/QT_Agenda/agenda_cfv_v1-0/test.db");

    if(!bancoDeDados.open())
    {
        ui->label->setText("Banco de dados não está aberto");
    }
    else
    {
        ui->label->setText("Banco aberto");
    }
}

JanelaLogin::~JanelaLogin()
{
    delete ui;
}

void JanelaLogin::on_btn_login_clicked()
{
    QString username = ui->txt_username->text(); //Coletar o valor de txt_username
    qDebug()<<username;
    QString senha = ui->txt_senha->text(); //Coletar o valor de txt_senha
    qDebug()<<senha;

    if(!bancoDeDados.isOpen())
    {
        qDebug()<<"Banco de dados não está aberto";
        return;
    }
    else
    {
        QSqlQuery query;
        QString sql = "select * from usuario where user = '"+ username +"' and senha = '"+ senha +"'";

        query.prepare(sql);

        if(query.exec(sql))
        {
            qDebug()<<"Entrou na query";
            int contador = 0;

            while(query.next())
            {
                contador++;
            }

            if(contador > 0)
            {
                this->close();
                fm_principal f_principal;
                f_principal.setModal(true);
                f_principal.exec();
            }
            else
            {
                ui->label->setText("Login não efetuado!");
                ui->txt_username->clear();
                ui->txt_senha->clear();
                ui->txt_username->setFocus();
            }
        }
        else
        {
            qDebug()<<query.lastError();
        }
    }
}
