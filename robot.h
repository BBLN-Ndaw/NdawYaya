#ifndef ROBOT_H
#define ROBOT_H
#include "position.h"
#include "joueur.h"

class robot {
public :
    robot(position*p);
    position*positionRobot() const;
    bool detecterJoueur(const joueur&j)const;
    void deplacerRobot(const joueur&j);
    void deplacerRobotAuHasard();

private :
    position*d_case;
};
#endif // ROBOT_H
