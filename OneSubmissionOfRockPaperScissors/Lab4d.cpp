#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {


        string playerOne, playerTwo;


        cout << "Player One: ";
        cin >> playerOne;

        cout << "Player Two: ";
        cin >> playerTwo;

        if (playerOne == "rock" && playerTwo == "paper")
        {
            cout << "Player Two wins!" << endl;
        }

        else if (playerOne == "rock" && playerTwo == "scissors")
        {
            cout << "Player One wins!";
        }

        else if (playerOne == "scissors" && playerTwo == "paper")
        {
            cout << "Player One wins!";
        }

        else if (playerOne == "scissors" && playerTwo == "rock")
        {
            cout << "Player Two wins!";
        }

        else if (playerOne == "paper" && playerTwo == "scissors")
        {
            cout << "Player Two wins!";
        }

        else if (playerOne == "paper" && playerTwo == "rock")
        {
            cout << "Player One wins!";
        }

        else
        {
            cout << "Draw!";
        }

        cout << "\n\n";

    }

    return 0;
}
