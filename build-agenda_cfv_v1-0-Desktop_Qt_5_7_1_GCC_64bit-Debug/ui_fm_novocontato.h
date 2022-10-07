/********************************************************************************
** Form generated from reading UI file 'fm_novocontato.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVOCONTATO_H
#define UI_FM_NOVOCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novocontato
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txt_nome;
    QLineEdit *txt_telefone;
    QLineEdit *txt_email;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_novocontato)
    {
        if (fm_novocontato->objectName().isEmpty())
            fm_novocontato->setObjectName(QStringLiteral("fm_novocontato"));
        fm_novocontato->resize(400, 300);
        widget = new QWidget(fm_novocontato);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 271, 85));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        verticalLayout_2->addWidget(txt_nome);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QStringLiteral("txt_telefone"));

        verticalLayout_2->addWidget(txt_telefone);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QStringLiteral("txt_email"));

        verticalLayout_2->addWidget(txt_email);


        horizontalLayout->addLayout(verticalLayout_2);

        widget1 = new QWidget(fm_novocontato);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(80, 170, 168, 25));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_gravar = new QPushButton(widget1);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout_2->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget1);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_2->addWidget(btn_cancelar);


        retranslateUi(fm_novocontato);

        QMetaObject::connectSlotsByName(fm_novocontato);
    } // setupUi

    void retranslateUi(QDialog *fm_novocontato)
    {
        fm_novocontato->setWindowTitle(QApplication::translate("fm_novocontato", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_novocontato", "Nome", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_novocontato", "Telefone", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_novocontato", "E-mail", Q_NULLPTR));
        btn_gravar->setText(QApplication::translate("fm_novocontato", "Gravar", Q_NULLPTR));
        btn_cancelar->setText(QApplication::translate("fm_novocontato", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_novocontato: public Ui_fm_novocontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVOCONTATO_H
