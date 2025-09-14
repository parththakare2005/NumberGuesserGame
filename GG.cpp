#include <iostream>
using namespace std;

class Guesser
{
    int guessednum;

public:
    int takeinputGuesser()
    {
        int x;
        cout << "Give the number for the guesser :" << endl;
        cin >> x;
        guessednum = x;
        return guessednum;
    }
};

class Player
{
    int playernum;

public:
    int takeinputPlayer()
    {
        int x;
        cout << "Give the number for the player :" << endl;
        cin >> x;
        playernum = x;
        return playernum;
    }
};

class Umpire
{
public:
    int g;
    int p1num, p2num, p3num;

    void GetNumFromGuesseser()
    {
        Guesser g1;
        g = g1.takeinputGuesser();
        cout << "Number guessed by guesser: " << g << endl;
    }

    void GetNumFromPlayer()
    {
        Player p1, p2, p3;
        cout << "Give the number for the player 1:" << endl;
        p1num = p1.takeinputPlayer();
        cout << "Give the number for the player 2:" << endl;
        p2num = p2.takeinputPlayer();
        cout << "Give the number for the player 3:" << endl;
        p3num = p3.takeinputPlayer();
    }

    void PrintTheResult()
    {
        if (g == p1num)
            cout << "Player 1 wins!" << endl;
        if (g == p2num)
            cout << "Player 2 wins!" << endl;
        if (g == p3num)
            cout << "Player 3 wins!" << endl;
        if (g != p1num && g != p2num && g != p3num)
            cout << "No player guessed correctly." << endl;
    }
};

int main() {
    cout << "_____Lets Play the Game_____" << endl;

    Umpire u;
    u.GetNumFromGuesseser();
    u.GetNumFromPlayer();
    u.PrintTheResult();

    cout << "_____End the Game_____" << endl;
}