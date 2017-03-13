#ifndef DIALOGFORBMU_H
#define DIALOGFORBMU_H

#include <QDialog>

namespace Ui {
class DialogforBMU;
}

class DialogforBMU : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogforBMU(QWidget *parent = 0);
    ~DialogforBMU();
    
private:
    Ui::DialogforBMU *ui;
};

#endif // DIALOGFORBMU_H
