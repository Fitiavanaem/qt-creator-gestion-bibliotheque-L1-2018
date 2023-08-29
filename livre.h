#ifndef LIVRE_H
#define LIVRE_H

#include <QMainWindow>

namespace Ui {
    class livre;
}

class livre : public QMainWindow
{
    Q_OBJECT

public:
    explicit livre(QWidget *parent = 0);
    ~livre();

private:
    Ui::livre *ui;
};

#endif // LIVRE_H
