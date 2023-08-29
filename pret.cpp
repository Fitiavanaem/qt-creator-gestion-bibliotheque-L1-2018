#include "pret.h"
#include "ui_pret.h"

pret::pret(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pret)
{
    ui->setupUi(this);
}

pret::~pret()
{
    delete ui;
}
