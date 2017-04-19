#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
#include <QTimer>
#include <QThread>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    // 使用一个线程,跑定时器
     _voiceThread = new QThread;
     _voiceTimer = new QTimer;
    _voiceTimer->setSingleShot(false);
    // 在moveToThread前先启动定时器,不然不在一个线程里,直接调用start会失败
    _voiceTimer->start(500);
    _voiceTimer->moveToThread(_voiceThread);
    // 定时器对象和this不在一个线程里面,因此这边指定了连接方式为Qt::DirectConnection,由定时器所在线程直接触发_onVoiceTimeout
    connect(_voiceTimer, SIGNAL(timeout()), this, SLOT(_onVoiceTimeout()), Qt::DirectConnection);
    // 连接定时器槽,用来停止定时器
    connect(this, SIGNAL(stop()), _voiceTimer, SLOT(stop()));
    _voiceThread->start();
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    emit _voiceTimer->stop();
    _voiceThread->quit();
    _voiceThread->wait();

    delete _voiceTimer;
    delete _voiceThread;
    delete ui;
}

void Dialog::on_stop_clicked()
{
    emit _voiceTimer->stop();
}

void Dialog::_onVoiceTimeout()
{
    qDebug()<<QString("500ms");
}
