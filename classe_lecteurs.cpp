#include<QFile>
#include<QTextStream>
#include<QIODevice>
#include "classe_lecteurs.h"

classe_lecteurs::classe_lecteurs()
{
   this->numeroL="";
   this->nomL="";
   this->prenomL="";
   this->adresseL="";
}
classe_lecteurs::classe_lecteurs(QString numero, QString nom, QString prenom, QString adresse)
{
    this->numeroL=numero;
    this->nomL=nom;
    this->prenomL=prenom;
    this->adresseL=adresse;

}
void classe_lecteurs :: ajoutlecteurs()
{
    QString chemin;
    chemin="F:\\Programmation\\Projet Qt\\Mon_projet\\Mon_projet-build-desktop\\document\\lecteurs.txt";
    QFile fichier(chemin);

    if(fichier.open(QIODevice::Append | QIODevice::Text))
      {
        QTextStream flux(&fichier);

        flux << this->numeroL<<"\n";
        flux << this->nomL<<"\n";
        flux << this->prenomL<<"\n";
        flux <<this->adresseL<<"\n";
      }
      else
      {
        fichier.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream flux(&fichier);
        flux << this->numeroL<<"\n";
        flux << this->nomL<<"\n";
        flux << this->prenomL<<"\n";
        flux <<this->adresseL<<"\n";
     }
    fichier.close();
}
