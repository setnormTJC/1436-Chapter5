#include <iostream>

using namespace std;

int main()
{
    double sum = 0; 

    int loopCounter = 0; 

    while (loopCounter < 1'000'000'000'000)
    {

        if (loopCounter > INT_MAX - 1000)
        {
            cout << loopCounter << endl; 

        }
        sum += loopCounter; 
        sum = sum + loopCounter; 

        loopCounter++;
    }

    cout << sum << endl; 
    return 0;
}