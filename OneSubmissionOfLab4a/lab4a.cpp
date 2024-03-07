#include <iomanip>
#include < cmath>
#include <iostream>
using namespace std;
int main()
{
	double cherry = 3.21;
	double tv = 132.21;
	double mug = 12.54;
	double totalcost = tv + mug + cherry;
	
	while (true)
	{
		cout << "enter the total cost: " << endl;
		cin >> totalcost;
		double shippingcost = 9.99;

		cout << fixed << setprecision(2); //assumes USD 

		if (200 <= totalcost && totalcost < 500) {

			cout << " FREE shipping ! your total is " << 
				totalcost << endl;
			//fixed as in a "fixed" number of digits after the decimal 
		}
		else if (totalcost < 200) {
			cout << "SHIPPING ADDED ! your total cost is " 
				<< totalcost + shippingcost << endl;

		}
		//be wary of "slipping through the cracks/loopholes"
		else {
			cout << "10 % discount ! your total cost is "
				<< totalcost * 0.9 << endl;
		}
	}

}