/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Confirm
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_Confirm)
    {
        if (Dialog_Confirm->objectName().isEmpty())
            Dialog_Confirm->setObjectName(QString::fromUtf8("Dialog_Confirm"));
        Dialog_Confirm->resize(400, 300);
        buttonBox = new QDialogButtonBox(Dialog_Confirm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Dialog_Confirm);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog_Confirm, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog_Confirm, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_Confirm);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Confirm)
    {
        Dialog_Confirm->setWindowTitle(QCoreApplication::translate("Dialog_Confirm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Confirm: public Ui_Dialog_Confirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
