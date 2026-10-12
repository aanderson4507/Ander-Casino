#include "card.h"
#include <iostream>
#include <string>

using namespace std;

//defualt constructor
card::card() : rank(0), suit("")
{
}

//parameterized constructor
card::card(int r, string s)
{
    rank = r;
    suit = s;
}

//Getter methods
int card::getRank()
{
    return rank;
}

string card::getSuit()
{
    return suit;
}