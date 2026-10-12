#ifndef CARD_H
#define CARD_H

#include <string>

using namespace std;

class card
{
    private:

    int rank;
    string suit;

    public:

    //Constructor
    card(int r, string s);


    //Getter methods
    int getRank();

    string getSuit();
};

#endif