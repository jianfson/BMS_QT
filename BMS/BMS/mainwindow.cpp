#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogforbmu.h"
#include "dialogforparameter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->cmdListTableWidget->setColumnWidth(0,180);
    for(int i=0;i<ui->cmdListTableWidget->rowCount();i++){
        ui->cmdListTableWidget->setRowHeight(i,20);
    }
    //qDebug << "sizeof(CANBaudRateTab) = " << sizeof(CANBaudRateTab);
    CANBaudRateTab = new CAN_BAUD_RATE[27];
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::CAN_GetBaudRateNum(unsigned int BaudRate)
{
    for(int i=0;i<27;i++){
        if(BaudRate == CANBaudRateTab[i].BaudRate){
            return i;
        }
    }
    return 0;
}
bool MainWindow::DeviceConfig(void)
{
    int ret;
    bool state;
    ret = USB_ScanDevice(NULL);
    if(ret <= 0){
//#ifdef LANGUE_EN
        QMessageBox::warning(this,"Warning","No device connected!");
//#else
//        QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("�� 设备连接！"));
//#endif
        return false;
    }
    state = USB_OpenDevice(ui->deviceIndexComboBox->currentIndex());
    if(!state){
//#ifdef LANGUE_EN
        QMessageBox::warning(this,"Warning","Open device faild!");
//#else
//        QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("打开设备失败！"));
//#endif
        return false;
    }
    CBL_CMD_LIST CMD_List;
    QString cmdStr[]={"Erase","WriteInfo","Write","Check","SetBaudRate","Excute","CmdSuccess","CmdFaild"};
    uint8_t cmdData[16];
    for(int i=0;i<ui->cmdListTableWidget->rowCount();i++){
        if(ui->cmdListTableWidget->item(i,0)->text()==cmdStr[i]){
            cmdData[i] = ui->cmdListTableWidget->item(i,1)->text().toInt(NULL,16);
        }
    }
    CMD_List.Erase = cmdData[0];
    CMD_List.WriteInfo = cmdData[1];
    CMD_List.Write = cmdData[2];
    CMD_List.Check = cmdData[3];
    CMD_List.SetBaudRate = cmdData[4];
    CMD_List.Excute = cmdData[5];
    CMD_List.CmdSuccess = cmdData[6];
    CMD_List.CmdFaild = cmdData[7];
    CAN_INIT_CONFIG CAN_InitConfig;
    QString str = ui->baudRateComboBox->currentText();
    str.resize(str.length()-4);
    int baud = str.toInt(NULL,10)*1000;
    CAN_InitConfig.CAN_BRP = CANBaudRateTab[CAN_GetBaudRateNum(baud)].PreScale;
    CAN_InitConfig.CAN_SJW = CANBaudRateTab[CAN_GetBaudRateNum(baud)].SJW;
    CAN_InitConfig.CAN_BS1 = CANBaudRateTab[CAN_GetBaudRateNum(baud)].BS1;
    CAN_InitConfig.CAN_BS2 = CANBaudRateTab[CAN_GetBaudRateNum(baud)].BS2;

    ret = CAN_BL_Init(ui->deviceIndexComboBox->currentIndex(),
                     ui->channelIndexComboBox->currentIndex(),
                     &CAN_InitConfig,
                     &CMD_List);
    if(ret!=CAN_SUCCESS){
//#ifdef LANGUE_EN
        QMessageBox::warning(this,"Warning","Config device faild!");
//#else
//        QMessageBox::warning(this,QStringLiteral("警告"),QStringLiteral("配置设备失败！"));
//#endif
        return false;
    }
    return true;
}

void MainWindow::on_actionBMU_triggered()
{
    Dialogforparameter *pDialogforBMU = new Dialogforparameter();
    pDialogforBMU->show();

}

void MainWindow::on_openFirmwareFileAction_triggered()
{
    QString fileName;
    fileName=QFileDialog::getOpenFileName(this,
                                          tr("Open files"),
                                          "",
                                          "Binary Files (*.bin);;Hex Files (*.hex);;All Files (*.*)");
    if(fileName.isNull()){
        return;
    }
    ui->firmwareLineEdit->setText(fileName);
}
