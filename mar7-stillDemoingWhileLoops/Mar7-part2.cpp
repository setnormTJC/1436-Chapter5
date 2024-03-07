#include <iostream>

using namespace std;

int main()
{
    //int dayCount = 0;
    //while (dayCount < 30); //Does nothing - forever
    //{
    //    cout << "Exercise.";
    //    dayCount = dayCount + 3;
    //    //sets reminder to exercise every 3 days for a month
    //}
    //string input = "NOTq";

    //while (input != "q") //"sentinel"-controlled loop
    ////we do not know how many times this loop will executed (indefinite loop) 
    //{
    //    cout << "Enter some input (q to quit): \n";
    //    cin >> input; 

    //    cout << "You entered " << input << endl; 
    //}

    for (int loopCounter = 1; loopCounter <= 11; loopCounter++)
        //usually a "for" loop executes a certain (known) number of times 
    {
        cout << loopCounter << endl; 
        
        cout << "Enter some input: " << endl; 
        string input; 
        cin >> input; 

        if (input == "q")
        {
            break;
        }
    }

    cout << "We got out of the for loop!" << endl; 

    int whileLoopCounter = 1; 
    while (whileLoopCounter <= 11)
    {
        cout << whileLoopCounter << endl; 
        whileLoopCounter++; 
    }
 
    return 0;
}