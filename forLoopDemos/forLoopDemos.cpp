#include <iostream>

#include<cmath> 

#define M_PI //not needed for Lab 4b

using namespace std;

int main()
{
    //i as in "iteration" or "index" (relates to "arrays") 
    //for (int i = 100; i >= -10; i -= 3)
    //{
    //    cout << i << endl; 
    //}


    //const double PI = 3.14;

    //for (double i = 0; i < 10 * PI; i = i + PI)
    //{
    //    cout << i << endl;
    //}

    //cout << "i" << "\t\t" << "2^i" << endl; //column description
    //cout << "--------------------------" << endl; //row separator
    //
    //for (int i = 0; i <= 10; i++)
    //{
    //    cout << i << "\t\t" << pow(2, i) << endl;
    //}


    for (double i = 0; i < 10'000'000'000; i++)
    {
        //do something
        //demoing speed: 
        if (i > 5'000'000'000)
        {
            cout << i << endl;
        }
    }

    return 0;
}