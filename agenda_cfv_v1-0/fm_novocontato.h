#ifndef FM_NOVOCONTATO_H
#define FM_NOVOCONTATO_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class fm_novocontato;
}

class fm_novocontato : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novocontato(QWidget *parent = 0);
    ~fm_novocontato();

private slots:
    void on_btn_gravar_clicked();

private:
    Ui::fm_novocontato *ui;
};

#endif // FM_NOVOCONTATO_H
