#ifndef CLASSE_LECTEURS_H
#define CLASSE_LECTEURS_H
#include<QString>

class classe_lecteurs
{
private:
    QString numeroL;
    QString nomL;
    QString prenomL;
    QString adresseL;

public:
    classe_lecteurs();
    classe_lecteurs(QString numero, QString nom, QString prenom, QString adresse);

    void ajoutlecteurs();
};

#endif // CLASSE_LECTEURS_H
