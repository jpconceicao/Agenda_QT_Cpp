#include "fm_pesquisacontatos.h"
#include "ui_fm_pesquisacontatos.h"

fm_pesquisacontatos::fm_pesquisacontatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_pesquisacontatos)
{
    ui->setupUi(this);
    // Query para mostrar todos os contatos já presentes no banco de dados
    QSqlQuery query;
    query.prepare("select * from contatos;");
    if(query.exec())
    {
        int contador = 0;
        ui->tw_contatos->setColumnCount(4);
        while(query.next())
        {
            ui->tw_contatos->insertRow(contador);
            ui->tw_contatos->setItem(contador, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tw_contatos->setItem(contador, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tw_contatos->setItem(contador, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tw_contatos->setItem(contador, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tw_contatos->setRowHeight(contador, 20); //definir altura da linha
            contador++;
        }
        //Formatando a tabela
        ui->tw_contatos->setColumnWidth(0, 30);
        ui->tw_contatos->setColumnWidth(1, 150);
        ui->tw_contatos->setColumnWidth(3, 200);
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar na tabela contatos!");
    }


}

fm_pesquisacontatos::~fm_pesquisacontatos()
{
    delete ui;
}
