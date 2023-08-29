#ifndef PRET_H
#define PRET_H

#include <QMainWindow>

namespace Ui {
    class pret;
}

class pret : public QMainWindow
{
    Q_OBJECT

public:
    explicit pret(QWidget *parent = 0);
    ~pret();

private:
    Ui::pret *ui;
};

#endif // PRET_H
