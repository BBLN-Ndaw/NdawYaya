#include "joueur.h"



joueur::joueur(std::string&nom,position pos,int score,int dureeVie):d_nom{nom},d_case{pos},d_score{score},d_dureeVie{dureeVie},d_nbrobotdetruit{0}
{}
joueur::~joueur(){
delete d_case;
}
    position*joueur::positionJoueur()const{

    return d_case;
}

int joueur::score()const{
    return d_score;

}
bool joueur::peutSeDeplacer(const position&p)const{
return((d_case.numLigne()-1<=p.numLigne())&&(p.numLigne()<=d_case.numLigne()+1)&&
((d_case.numColonne()-1<=p.numColonne())&&(p.numColonne()<=d_case.numColonne()+1)))


/*le petit terrain a pour coordonnées
posiActel.ligne-1 et posiActel.ligne+1
posiActel.col-1 posiActel.col+1
et on cherche si la position ou on veut se deplacer  est tdans cette zone
*/


}

/* Deplace le joueur à la place X si la position est dans la grille et s'il est autorisé à s'y deplacer

*/
void joueur::deplacerVers(int numcol, int numligne,const terrain&tr){
    position p(numcol,numligne);
    if(tr.estDansTerrain(p)&&peutSeDeplacer(p)){

    }
    d_case->changerPosition(numcol,numligne);
}



void joueur::sauverJoueur(std::ostream&ost)const{

    ost<<"("<<d_nom<<","<<d_case<<","<<d_score<<","<<d_dureeVie<<")";
}
void joueur::LireDepuis(std::istream&ist){
char c;
ist>>c>>d_nom>>c;
d_case.LireDepuis(ist);
ist>>c>>d_score>>c>>d_dureeVie>>c;

}

std::ostream& operator<<(std::ostream&ost, joueur& j){

    j.sauverJoueur(ost);
    return ost;

}
std::istream&operator>>(std::istream&ist,joueur&j){
j.LireDepuis(ist);
return ist;
}

