#include <iostream>

using namespace std;

int main()
{
    srand(time(0));  //let's treat this as a "black box" and just use it!
    //seed random 


    int correctNumber = rand() % 100; //what does this "mod"/AKA: remainder operation do? 
    //between 0 and 99
     
    //int i = 0; 
    //while (i < 100)
    //{
    //    correctNumber = rand() % 100; 
    //    cout << correctNumber << endl;

    //    i++; 
    //}

    //rand()//NOT Rand Al'Thor 


    int guessedNumber = -99; //should make sure the while loop gets executed 

    cout << "A random number between 0 and 100 has been generated - try to guess it!\n";

    cout << "Enter your guess!\n";
    cin >> guessedNumber;

    int numberOfGuesses = 1; 

    while (correctNumber != guessedNumber && numberOfGuesses < 7) //log2(100) 
    {

        if (correctNumber > guessedNumber)
        {
            cout << "Your guess was too LOW - guess again" << endl;
            cin >> guessedNumber;
            numberOfGuesses++; //numberOfGuesses = numberOfGuesses + 1; 
        }

        else if (correctNumber < guessedNumber)
        {
            cout << "Too HIGH - guess again \n";
            cin >> guessedNumber;
            numberOfGuesses++;
        }

     }

    cout << "Correct number was: " << correctNumber << endl; 

    if (numberOfGuesses == 7)
    {
        cout << "You LOST - too many guesses!\n";
    }
    else
    {
        cout << "CORRECT - and it only took you this many guesses : " << numberOfGuesses << endl;
    }



    return 0;
}