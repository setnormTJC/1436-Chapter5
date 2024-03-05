#include <iostream>

using namespace std;

int main()
{


    int studentCount = 0; 

    while (studentCount < 5)
    {
        int studentIgrade; //i -> "iteration" 
        cout << "Enter student number "<< studentCount << "'s grade: " << endl;
        cin >> studentIgrade; 

        studentCount = studentCount + 1; 

    }

    return 0;
}