/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novocontato;
    QPushButton *btn_pesquisarcontato;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QStringLiteral("fm_principal"));
        fm_principal->resize(400, 300);
        layoutWidget = new QWidget(fm_principal);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 238, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_novocontato = new QPushButton(layoutWidget);
        btn_novocontato->setObjectName(QStringLiteral("btn_novocontato"));

        horizontalLayout->addWidget(btn_novocontato);

        btn_pesquisarcontato = new QPushButton(layoutWidget);
        btn_pesquisarcontato->setObjectName(QStringLiteral("btn_pesquisarcontato"));

        horizontalLayout->addWidget(btn_pesquisarcontato);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", Q_NULLPTR));
        btn_novocontato->setText(QApplication::translate("fm_principal", "Adicionar contato", Q_NULLPTR));
        btn_pesquisarcontato->setText(QApplication::translate("fm_principal", "Pesquisar contato", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
