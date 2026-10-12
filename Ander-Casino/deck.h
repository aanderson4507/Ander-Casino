#ifndef DECK_H
#define DECK_H

#include "card.h"

using namespace std;

class deck
{
    private:

    card cards[52];
    int current_card = 0;

    public:

    deck();

    void shuffle();

    card deal_card();
};

#endif
