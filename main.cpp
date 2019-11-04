#include "grille.h"
#include "joueur.h"
#include <QApplication>
#include "fenetre.h"

int main(int argc, char *argv[])
{
    position p;
    std::string nom = "Jean";
    joueur j{nom,p,0,0};

   // terrain t(4,3,1,5,5);
    terrain t;
   // t.afficheGrille();
    t.ChangerJoueur(j);

   QApplication app{argc,argv};
    fenetre f(t);
    f.show();
    app.exec();


}
