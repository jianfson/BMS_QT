#ifndef DIALOGFORPARAMETER_H
#define DIALOGFORPARAMETER_H

#include <QDialog>

namespace Ui {
class Dialogforparameter;
}

class Dialogforparameter : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialogforparameter(QWidget *parent = 0);
    ~Dialogforparameter();
    
private:
    Ui::Dialogforparameter *ui;
};

#endif // DIALOGFORPARAMETER_H
