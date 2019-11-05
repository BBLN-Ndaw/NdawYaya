#include "robot.h"
#include "joueur.h"
namespace participant
{
robot::robot(position*p):d_case{p}{};

position* robot::positionRobot() const
{
    return d_case;
}
//detecte si le joueur est present autour de lui
bool robot::detecterJoueur( const joueur&j) const
{

}
void robot::deplacerRobotAuHasard()
{
    d_case=new postion (caseHasard);
}
// si le robot a detecté un joueur il se deplace sur sa case
//sinon il se deplace sur  une case au hasard se trouvant à coté
void robot::deplacerRobot(const joueur&j)
{
    if (detecterJoueur(j))
    {
        d_case=new position(j.positionJoueur);
    }
    else
    {
        deplacerRobotAuHasard();
    }
}
}
