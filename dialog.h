#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>




namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_stop_clicked();

    void _onVoiceTimeout();

private:
    Ui::Dialog *ui;
    QThread* _voiceThread;
    QTimer* _voiceTimer;
};

#endif // DIALOG_H
