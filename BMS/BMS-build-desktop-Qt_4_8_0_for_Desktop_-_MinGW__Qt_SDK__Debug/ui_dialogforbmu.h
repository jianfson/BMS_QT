/********************************************************************************
** Form generated from reading UI file 'dialogforbmu.ui'
**
** Created: Tue Mar 14 18:23:39 2017
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogforBMU
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_3;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *DialogforBMU)
    {
        if (DialogforBMU->objectName().isEmpty())
            DialogforBMU->setObjectName(QString::fromUtf8("DialogforBMU"));
        DialogforBMU->resize(485, 556);
        buttonBox = new QDialogButtonBox(DialogforBMU);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 510, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(DialogforBMU);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 201, 81));
        QFont font;
        font.setPointSize(9);
        groupBox->setFont(font);
        layoutWidget = new QWidget(DialogforBMU);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 220, 131, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);

        layoutWidget_2 = new QWidget(DialogforBMU);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(240, 180, 131, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinBox_3 = new QSpinBox(layoutWidget_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_3->addWidget(spinBox_3);

        pushButton = new QPushButton(DialogforBMU);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 220, 75, 23));
        widget = new QWidget(DialogforBMU);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 180, 131, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        retranslateUi(DialogforBMU);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogforBMU, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogforBMU, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogforBMU);
    } // setupUi

    void retranslateUi(QDialog *DialogforBMU)
    {
        DialogforBMU->setWindowTitle(QApplication::translate("DialogforBMU", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogforBMU", "\350\256\276\345\244\207\345\261\236\346\200\247\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogforBMU", "CAN\351\200\232\351\201\223\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogforBMU", "CAN\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogforBMU", "\350\277\236\346\216\245(C)", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogforBMU", "\350\256\276\345\244\207\347\264\242\345\274\225\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogforBMU: public Ui_DialogforBMU {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFORBMU_H
