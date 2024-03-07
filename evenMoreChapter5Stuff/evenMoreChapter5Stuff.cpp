#include <iostream>

using namespace std;

int globalIntegerVariable = 3444; 

int main()
{
    bool isCorrectGuess = false; 

    int correctNumber = 32; 

    int guess;

    while (!isCorrectGuess)
    {
        cout << "Guess the random number " << endl; 
        cin >> guess; 
        if (guess == correctNumber)
        {
            isCorrectGuess = true; 
        }
    }

    cout << guess << endl; //GUESS is declared INSIDE of the while loop 
                            //it is OUT OF SCOPE outside of the while loop braces

    return 0;
}