#include <iostream>

using namespace std;

int main()
{
    //5! = 5(4)(3)(2)(1) = 120
    //7! = 7(6)(5) =~ 4900

    int N; 
    cout << "Enter the number - we'll calculate the factorial of it: " << endl; 
    cin >> N; 

    int factorialResult = 1;//? 
    for (int i = 1; i <= N; i++)
    {
        factorialResult = factorialResult * N;

    }

    cout << "Factorial of " << N << " is: " << factorialResult << endl; 





    return 0;
}