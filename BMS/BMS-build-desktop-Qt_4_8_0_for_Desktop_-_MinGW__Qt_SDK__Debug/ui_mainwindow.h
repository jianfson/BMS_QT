/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Mar 21 00:03:27 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exitAction;
    QAction *scanNodeAction;
    QAction *contactUsAction;
    QAction *aboutAction;
    QAction *openFirmwareFileAction;
    QAction *actionBMU;
    QAction *actionBCU;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableWidget *nodeListTableWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QTableWidget *cmdListTableWidget;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *deviceIndexComboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *channelIndexComboBox;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QComboBox *newBaudRateComboBox;
    QPushButton *setbaudRatePushButton;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *baudRateComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *firmwareLineEdit;
    QPushButton *openFirmwareFilePushButton;
    QCheckBox *allNodeCheckBox;
    QPushButton *updateFirmwarePushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(658, 486);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/easyicon_net.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/gif_48_026.gif"), QSize(), QIcon::Normal, QIcon::Off);
        exitAction->setIcon(icon1);
        scanNodeAction = new QAction(MainWindow);
        scanNodeAction->setObjectName(QString::fromUtf8("scanNodeAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/gif_48_086.gif"), QSize(), QIcon::Normal, QIcon::Off);
        scanNodeAction->setIcon(icon2);
        contactUsAction = new QAction(MainWindow);
        contactUsAction->setObjectName(QString::fromUtf8("contactUsAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/gif_48_079.gif"), QSize(), QIcon::Normal, QIcon::Off);
        contactUsAction->setIcon(icon3);
        aboutAction = new QAction(MainWindow);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/gif_48_052.gif"), QSize(), QIcon::Normal, QIcon::Off);
        aboutAction->setIcon(icon4);
        openFirmwareFileAction = new QAction(MainWindow);
        openFirmwareFileAction->setObjectName(QString::fromUtf8("openFirmwareFileAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/gif_48_045.gif"), QSize(), QIcon::Normal, QIcon::Off);
        openFirmwareFileAction->setIcon(icon5);
        actionBMU = new QAction(MainWindow);
        actionBMU->setObjectName(QString::fromUtf8("actionBMU"));
        actionBCU = new QAction(MainWindow);
        actionBCU->setObjectName(QString::fromUtf8("actionBCU"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(330, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nodeListTableWidget = new QTableWidget(groupBox);
        if (nodeListTableWidget->columnCount() < 3)
            nodeListTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        nodeListTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        nodeListTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        nodeListTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        nodeListTableWidget->setObjectName(QString::fromUtf8("nodeListTableWidget"));

        gridLayout->addWidget(nodeListTableWidget, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cmdListTableWidget = new QTableWidget(groupBox_2);
        if (cmdListTableWidget->columnCount() < 2)
            cmdListTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        cmdListTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        cmdListTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        if (cmdListTableWidget->rowCount() < 8)
            cmdListTableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        cmdListTableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        cmdListTableWidget->setItem(0, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(1, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        cmdListTableWidget->setItem(1, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(2, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        cmdListTableWidget->setItem(2, 1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(3, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        cmdListTableWidget->setItem(3, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(4, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        cmdListTableWidget->setItem(4, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(5, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        cmdListTableWidget->setItem(5, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(6, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        cmdListTableWidget->setItem(6, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        cmdListTableWidget->setItem(7, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        cmdListTableWidget->setItem(7, 1, __qtablewidgetitem28);
        cmdListTableWidget->setObjectName(QString::fromUtf8("cmdListTableWidget"));

        gridLayout_2->addWidget(cmdListTableWidget, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(groupBox_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        deviceIndexComboBox = new QComboBox(frame);
        deviceIndexComboBox->setObjectName(QString::fromUtf8("deviceIndexComboBox"));
        deviceIndexComboBox->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(deviceIndexComboBox);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(48, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        channelIndexComboBox = new QComboBox(frame);
        channelIndexComboBox->setObjectName(QString::fromUtf8("channelIndexComboBox"));
        channelIndexComboBox->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(channelIndexComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_9->addWidget(label_6);

        newBaudRateComboBox = new QComboBox(frame);
        newBaudRateComboBox->setObjectName(QString::fromUtf8("newBaudRateComboBox"));
        newBaudRateComboBox->setMinimumSize(QSize(80, 0));

        horizontalLayout_9->addWidget(newBaudRateComboBox);


        horizontalLayout_6->addLayout(horizontalLayout_9);

        setbaudRatePushButton = new QPushButton(frame);
        setbaudRatePushButton->setObjectName(QString::fromUtf8("setbaudRatePushButton"));
        setbaudRatePushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_6->addWidget(setbaudRatePushButton);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        baudRateComboBox = new QComboBox(frame);
        baudRateComboBox->setObjectName(QString::fromUtf8("baudRateComboBox"));
        baudRateComboBox->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(baudRateComboBox);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(48, 0));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        firmwareLineEdit = new QLineEdit(frame);
        firmwareLineEdit->setObjectName(QString::fromUtf8("firmwareLineEdit"));

        horizontalLayout_5->addWidget(firmwareLineEdit);

        openFirmwareFilePushButton = new QPushButton(frame);
        openFirmwareFilePushButton->setObjectName(QString::fromUtf8("openFirmwareFilePushButton"));
        openFirmwareFilePushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_5->addWidget(openFirmwareFilePushButton);

        allNodeCheckBox = new QCheckBox(frame);
        allNodeCheckBox->setObjectName(QString::fromUtf8("allNodeCheckBox"));
        allNodeCheckBox->setMinimumSize(QSize(75, 0));

        horizontalLayout_5->addWidget(allNodeCheckBox);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        updateFirmwarePushButton = new QPushButton(frame);
        updateFirmwarePushButton->setObjectName(QString::fromUtf8("updateFirmwarePushButton"));
        updateFirmwarePushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_7->addWidget(updateFirmwarePushButton);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(frame);


        gridLayout_4->addLayout(verticalLayout_2, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(openFirmwareFileAction);
        menu->addAction(exitAction);
        menu_2->addAction(scanNodeAction);
        menu_3->addAction(contactUsAction);
        menu_3->addAction(aboutAction);
        menu_4->addAction(actionBMU);
        menu_4->addAction(actionBCU);
        mainToolBar->addAction(openFirmwareFileAction);
        mainToolBar->addAction(scanNodeAction);
        mainToolBar->addAction(contactUsAction);
        mainToolBar->addAction(aboutAction);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BMS", 0, QApplication::UnicodeUTF8));
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        scanNodeAction->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217\350\212\202\347\202\271", 0, QApplication::UnicodeUTF8));
        contactUsAction->setText(QApplication::translate("MainWindow", "\350\201\224\347\263\273\346\210\221\344\273\254", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\275\257\344\273\266", 0, QApplication::UnicodeUTF8));
        openFirmwareFileAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        actionBMU->setText(QApplication::translate("MainWindow", "BMU", 0, QApplication::UnicodeUTF8));
        actionBCU->setText(QApplication::translate("MainWindow", "BCU", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\212\202\347\202\271\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = nodeListTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = nodeListTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\233\272\344\273\266\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = nodeListTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\233\272\344\273\266\347\211\210\346\234\254", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\221\275\344\273\244\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = cmdListTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = cmdListTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\200\274\357\274\210Hex\357\274\211", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = cmdListTableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = cmdListTableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = cmdListTableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = cmdListTableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = cmdListTableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = cmdListTableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = cmdListTableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = cmdListTableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = cmdListTableWidget->isSortingEnabled();
        cmdListTableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = cmdListTableWidget->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "Erase", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = cmdListTableWidget->item(0, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "00", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = cmdListTableWidget->item(1, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "WriteInfo", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = cmdListTableWidget->item(1, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "01", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = cmdListTableWidget->item(2, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "Write", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = cmdListTableWidget->item(2, 1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "02", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = cmdListTableWidget->item(3, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "Check", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = cmdListTableWidget->item(3, 1);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "03", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = cmdListTableWidget->item(4, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "SetBaudRate", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = cmdListTableWidget->item(4, 1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "04", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = cmdListTableWidget->item(5, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Excute", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = cmdListTableWidget->item(5, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "05", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = cmdListTableWidget->item(6, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "CmdSuccess", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = cmdListTableWidget->item(6, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "08", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = cmdListTableWidget->item(7, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "CmdFaild", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = cmdListTableWidget->item(7, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "09", 0, QApplication::UnicodeUTF8));
        cmdListTableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        deviceIndexComboBox->clear();
        deviceIndexComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\223\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        channelIndexComboBox->clear();
        channelIndexComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("MainWindow", "\346\226\260\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        newBaudRateComboBox->clear();
        newBaudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1000 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "500 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "100 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "50 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "20 Kbps", 0, QApplication::UnicodeUTF8)
        );
        setbaudRatePushButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\263\242\347\211\271\347\216\207", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        baudRateComboBox->clear();
        baudRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1000 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "500 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "200 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "100 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "50 Kbps", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "20 Kbps", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\233\272\344\273\266\357\274\232", 0, QApplication::UnicodeUTF8));
        openFirmwareFilePushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        allNodeCheckBox->setText(QApplication::translate("MainWindow", "\346\211\200\346\234\211\350\212\202\347\202\271", 0, QApplication::UnicodeUTF8));
        updateFirmwarePushButton->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260\345\233\272\344\273\266", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
