#include "joueur.h"

joueur::joueur()
{}

joueur::joueur(std::string&nom,position pos,int score,int dureeVie):d_nom{nom},d_case{pos},d_score{score},d_dureeVie{dureeVie},d_nbrobotdetruit{0}
{}

position joueur::positionJoueur(){

    return d_case;
}

int joueur::score()const{
    return d_score;

}

void joueur::deplacerJoueur(int numcol, int numligne){
    d_case.changerPosition(numcol,numligne);
}

void joueur::sauverJoueur(std::ostream&ost){

    ost<<"("<<d_nom<<","<<d_case<<","<<d_score<<","<<d_dureeVie<<")";
}


std::ostream& operator<<(std::ostream&ost, joueur& j){

    j.sauverJoueur(ost);
    return ost;

}
