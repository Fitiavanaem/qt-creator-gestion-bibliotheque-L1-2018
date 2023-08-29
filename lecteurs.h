#ifndef LECTEURS_H
#define LECTEURS_H

#include <QMainWindow>

namespace Ui {
    class lecteurs;
}

class lecteurs : public QMainWindow
{
    Q_OBJECT

public:
    explicit lecteurs(QWidget *parent = 0);
    ~lecteurs();

private:
    Ui::lecteurs *ui;

private slots:
    void on_actionPret_triggered();
    void on_actionLivre_triggered();
    void on_btnannuler_clicked();
    void on_btnajout_clicked();
    void on_actionQuitter_triggered();
};

#endif // LECTEURS_H
