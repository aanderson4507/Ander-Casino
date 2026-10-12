#include "card.h"
#include <iostream>
#include <string>

using namespace std;

card::card(int r, string s)
{
    rank = r;
    suit = s;
}

int card::getRank()
{
    return rank;
}

string card::getSuit()
{
    return suit;
}