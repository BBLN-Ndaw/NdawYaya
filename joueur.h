#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>

#include"position.h"



class joueur{

public:
    joueur();
    joueur(std::string&nom,position pos,int score,int dureeVie);
    position positionJoueur();
    int score()const;
    void deplacerVers(int numcol, int numligne);
    void sauverJoueur(std::ostream&ost);
    void LireDepuis(std::istream&ost);

private:
    std::string d_nom;
    position d_case;//la case ou se trouve le joueur
    int d_score;
    int d_dureeVie;
    int d_nbrobotdetruit;

};

std::ostream& operator<<(std::ostream&ost, joueur& j);
std::istream&operator>>(std::istream&ist,joueur&j);
//std::istream& operator>>(std::istream&ist, joueur& j);


#endif // JOUEUR_H
























//#endif // JOUEUR_H
