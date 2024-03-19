#include <iostream>
#include <string>

#include<filesystem>

#include<fstream> 

using std::cout; 
using std::cin; 
using std::endl; 
using std::string;



int main()
{

	//loops within loops! Hooray!
	//for (int outerLoopCounter = 1; outerLoopCounter < 5; outerLoopCounter++)
	//{
	//	for (int innerLooperCounter = 2; innerLooperCounter < 6; innerLooperCounter++)
	//	{
	//		cout << "inner counter: " << innerLooperCounter
	//			<< "\touter loop counter has the value: " << outerLoopCounter << endl; 
	//	}

	//	cout << "\n\n";
	//}

	int loopRunCount = 0; 
	//multiplication table 
	for (int x = 1; x < 13; x++)
	{
		for (int y = 1; y < 14; y++)
		{
			for (int z = 1; z < 1'000'000; z++)
			{
				//cout << x * y  * z<< " ";
				int result = x * y * z; 
				loopRunCount++; 
			}
		}
		cout << "\n";
	}

	cout << "...done\n";
	cout << "Loop ran this many times: " << loopRunCount << endl; 


	return 0; 
}