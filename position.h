#ifndef POSITION_H
#define POSITION_H

#include <iostream>


class position{
public:
    position();
    position(int col,int lig);
    int numColonne()const;
    int numLigne()const;
    void changerPosition(int lig,int col);
    void sauverPosition(std::ostream&ost);
    void LireDepuis(std::istream&ist);
    void afficherPosition();
    void DeplacerVers(int lig,int col);

private:
    int d_numColonne;
    int d_numLigne;

};

std::ostream& operator<<(std::ostream&ost, position&p);
std::istream&operator>>(std::istream&ist,position&p);
#endif // POSITION_H
