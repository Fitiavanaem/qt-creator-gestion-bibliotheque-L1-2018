#include "livre.h"
#include "ui_livre.h"

livre::livre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::livre)
{
    ui->setupUi(this);
}

livre::~livre()
{
    delete ui;
}
