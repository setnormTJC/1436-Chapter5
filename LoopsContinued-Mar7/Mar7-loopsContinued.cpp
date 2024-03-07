#include <iostream>

using namespace std;

int main()
{
    //simulating a calendar app (recurring reminder every 3 days) 
    //int currentDayNumber = 1; 
    //while (currentDayNumber < 28) //set a reminder to do something for a month 
    //{
    //    cout << "Exercise - it is day number: " << currentDayNumber << endl;

    //    currentDayNumber = currentDayNumber + 2; 

    //}

    int loopCounter = 10; 

    while (loopCounter <= 100) //"off by one (logic) error?"
    {
        cout << loopCounter << " ... " << endl; 
        //nasaVariable = nasaVariable - 1; 
        //loopCounter = loopCounter* 2;
        loopCounter *= 2; 
    }

    cout << "Out of loop now - lifting off - HOORAY!\n";


    //while (true)
    //{
    //    cout << 1 << endl; 
    //}



    return 0;
}