#include "deck.h"
#include <iostream>
#include <string>

using namespace std;

deck::deck()
{
    int index = 0;
    string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    for (int s = 0; s < 4; s++)
    {
        for (int r = 1; r <= 13; r++)
        {
            cards[index] = card(r, suits[s]);
            index++;
        }
    }
}

void deck::shuffle()
{
    for (int i = 0; i < 52; i++)
    {
        int j = rand() % 52;
        card temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
    current_card = 0;
}

card deck::deal_card()
{
    if (current_card < 52)
    {
        return cards[current_card++];
    }
    else
    {
        // If all cards have been dealt, shuffle the deck and start over
        cout << "All cards have been dealt. Shuffling the deck..." << endl;
        shuffle();
        return card();
    }
}