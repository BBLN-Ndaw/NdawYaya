#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>

#include"position.h"
#include"terrain.h"

class joueur{

public:
    joueur();
    ~joueur();
    joueur(std::string&nom,position pos,int score,int dureeVie);
    position* positionJoueur()const;
    int score()const;
   bool peutSeDeplacer(const position&p)const;
    void deplacerVers(int numcol, int numligne,const terrain&tr);
    void sauverJoueur(std::ostream&ost)const;
    void LireDepuis(std::istream&ost);
    int NombreRobotDetruit()const;

private:
    std::string d_nom;
    position*d_case;//la case ou se trouve le joueur
    int d_score; //represente le nombre de robot detruit
    int d_dureeVie;
   int d_nbrobotdetruit;//est ce qu'on pouvait pas le supprimer?

};

std::ostream& operator<<(std::ostream&ost, joueur& j);
std::istream&operator>>(std::istream&ist,joueur&j);
//std::istream& operator>>(std::istream&ist, joueur& j);


#endif // JOUEUR_H
























//#endif // JOUEUR_H
