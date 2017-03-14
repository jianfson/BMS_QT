/********************************************************************************
** Form generated from reading UI file 'dialogforbmu.ui'
**
** Created: Tue Mar 14 14:05:58 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFORBMU_H
#define UI_DIALOGFORBMU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogforBMU
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogforBMU)
    {
        if (DialogforBMU->objectName().isEmpty())
            DialogforBMU->setObjectName(QString::fromUtf8("DialogforBMU"));
        DialogforBMU->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogforBMU);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DialogforBMU);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogforBMU, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogforBMU, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogforBMU);
    } // setupUi

    void retranslateUi(QDialog *DialogforBMU)
    {
        DialogforBMU->setWindowTitle(QApplication::translate("DialogforBMU", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogforBMU: public Ui_DialogforBMU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFORBMU_H
