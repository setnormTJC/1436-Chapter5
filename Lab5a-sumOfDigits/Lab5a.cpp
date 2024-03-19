/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int input = 0;
    cout << "Type the input";
    cin >> input;
    int looping = 0;
    int remainder;
    int sum = 0;

    int copyOfInput = input; 

    while (input > 0)
    {
        remainder = input % 10;
        looping = looping + 1;
        input = input / 10;
        cout << "The input now equals:" << input << endl;
        cout << "Loop number:" << looping << endl;

        sum = sum + remainder;

    }

    //"TOY program" 
    cout << "Sum of the digits " << copyOfInput << " is: " << sum << endl; 
    return 0;
}