#include<QFile>
#include<QTextStream>
#include<QIODevice>

#include "lecteurs.h"
#include "ui_lecteurs.h"
#include "livre.h"
#include "pret.h"
#include "classe_lecteurs.h"

lecteurs::lecteurs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lecteurs)
{
    ui->setupUi(this);

}

lecteurs::~lecteurs()
{
    delete ui;
}

void lecteurs::on_actionQuitter_triggered()
{
    this->hide();
}

void lecteurs::on_btnajout_clicked()
{
    QString numero = ui->txtnumero->text();
    QString nom = ui->txtnom->text();
    QString prenom = ui->txtprenom->text();
    QString adresse = ui->txtadresse->text();

    classe_lecteurs lec1(numero,nom,prenom,adresse);
    lec1.ajoutlecteurs();

    ui->txtnumero->setText("");
    ui->txtnom->setText("");
    ui->txtprenom->setText("");
    ui->txtadresse->setText("");

    int i=0, j=0;

    ui->tbwliste->setRowCount(100);
    QFile fichier("F:\\Programmation\\Projet Qt\\Mon_projet\\Mon_projet-build-desktop\\document\\lecteurs.txt");
    if( fichier.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream flux(&fichier);
        while(!flux.atEnd())
        {
            ui->tbwliste->setItem(i,j, new QTableWidgetItem(flux.readLine()));
            j+=1;
            if(j==4)
            {
                j=0;
                i+=1;
            }
        }
    }
    fichier.close();
}

void lecteurs::on_btnannuler_clicked()
{
    ui->txtnumero->setText("");
    ui->txtnom->setText("");
    ui->txtprenom->setText("");
    ui->txtadresse->setText("");
}

void lecteurs::on_actionLivre_triggered()
{
livre *fenetre_livre= new livre;
fenetre_livre->show();
this->close();
}

void lecteurs::on_actionPret_triggered()
{
    pret *fenetre_pret= new pret;
    fenetre_pret->show();
    this->close();
}
