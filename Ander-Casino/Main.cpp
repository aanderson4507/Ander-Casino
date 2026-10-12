#include "deck.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //Seeds to random number generator to ensure true randomness
    srand(time(nullptr));

    deck playerDeck;
    deck computerDeck;

    playerDeck.shuffle();
    computerDeck.shuffle();

    bool continueGame = true;

    //test game (highest card drawn wins)
    while (continueGame == true)
    {
        for (int i = 0; i < 3; i++)
        {
            card playerCard = playerDeck.deal_card();
            card computerCard = computerDeck.deal_card();

            cout << "Round " << (i + 1) << ":" << endl;
            cout << "Player draws: " << playerCard.getRank() << " of " << playerCard.getSuit() << endl;
            cout << "Computer draws: " << computerCard.getRank() << " of " << computerCard.getSuit() << endl;

            if (playerCard.getRank() > computerCard.getRank())
            {
                cout << "Player wins this round!" << endl;
            }
            else if (playerCard.getRank() < computerCard.getRank())
            {
                cout << "Computer wins this round!" << endl;
            }
            else
            {
                cout << "It's a tie!" << endl;
            }
            cout << endl;
        }

        //Ask user if they want to play again
        char userChoice;
        cout << "Do you want to play again? (y/n): ";
        cin >> userChoice;

        //Change (or keep) continueGame boolean to match user choice
        if (userChoice == 'n' || userChoice == 'N')
        {
            continueGame = false;
        }
        else
        {
            playerDeck.shuffle();
            computerDeck.shuffle();
        }
    }

    return 0;
}