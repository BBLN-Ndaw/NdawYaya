#ifndef TERRAIN_H
#define TERRAIN_H

#include "joueur.h"
#include "robot.h"
#include "time.h"
#include <iostream>
#include <fstream>
#include <vector>


class terrain
{
    public:
     terrain();
     terrain(int nbdebris, int nbrobotfirstG, int nbrobotsecondG, int nbligne, int nbcolonne, joueur&j);

     int nbColonne()const;
     int nbLigne()const;
     int nbDebris()const;
     int nbRobot1G()const;
     int nbRobot2G()const;
     joueur Joueur();
     std::vector<std::vector<int>> grille()const;

     void lireTerrain(const std::string&nomFichier);
     void sauverTerrain(const std::string&nomFichier);
     void changerTailleGrille(int nbligne, int nbcolonne);
     void changerNb(int nbdebris,int nbRobot1G,int nbRobot2G);
     void changerPosJoueur(int numcol, int numligne);
     void InitialisationGrille(int nbdebris, int nbRobot1G, int nbRobot2G);
     void ChangerJoueur(joueur&j);
     bool terrainOk();
     bool JoueurAPerdu();
      /* pour verifier si la position es t dans le terrain*/
      bool estDansTerrain(const position&p)const;
     void afficheGrille(); // fonction test
     void afficherPositionJoueur(); //fonction test

    private :
     int d_nbdebris;
     joueur d_joueur;
     int d_nbrobotFirstG;
     int d_nbrobotSecondG;
     int d_nbligne;
     int d_nbcolonne;
     //garder une reference sur le joueur

     std::vector<std::vector<int>> d_grille; // 0 = vide, 1 = joueur, 2 = robot1G, 3 = robot2G, 4 = debris
     std::vector<robot*> d_robot1G;
     std::vector<robot*> d_robot2G;




};

#endif // TERRAIN_H
