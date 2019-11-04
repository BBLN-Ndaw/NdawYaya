#ifndef POSITION_H
#define POSITION_H

#include <iostream>


class position{
public:
    position();
    position(int col,int lig);
    int numColonne()const;
    int numLigne()const;
    void changerPosition(int col,int lig);
    void sauverPosition(std::ostream&ost);
    void afficherPosition();

private:
    int d_numColonne;
    int d_numLigne;

};

std::ostream& operator<<(std::ostream&ost, position&p);

#endif // POSITION_H
