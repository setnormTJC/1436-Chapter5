//Programmer: Matthew Wislon
//Starting date: 3/06/2024
//Ending date: 3/06/2024
//Program description: To show the functionality of "if"s and "else if"s.

/*Programmer commentary-
Despite the assignment stating to look up products and assigning variables
to have those products and the values of those products, I prefer the user
to also "engage" in the program's functionality.  Thus, the variables don't
have set values, and the user assigns the variables' values.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Unlike Lab3a, this has a "char" and two "boolean" variables.
	//Declaring variables.
	float itemPriceOne = 0.0;
	float itemPriceTwo = 0.0;
	float itemPriceThree = 0.0;
	float totalItemPrice = 0.0;

	char optionalThirdPrice = ' ';

	bool shippingAdded = false;
	bool discountAdded = false;



	//Unlike Lab3a, this has a optional third product.
	cout << "Please put in the price of the first item: $";
	cin >> itemPriceOne;
	cout << "\nPlease put in the proce of the second item: $";
	cin >> itemPriceTwo;
	cout << "\nIs there a third product you want to add to this "
		"(Y/y for yes, otherwise any character for no)? ";
	
	cin >> optionalThirdPrice;

	if (optionalThirdPrice == 'Y' || optionalThirdPrice == 'y')
	{
		cout << "\nWhat's the value of the third product? $";
		cin >> itemPriceThree;
	}
	totalItemPrice = itemPriceOne + itemPriceTwo + itemPriceThree;

	//A small series of "if-else-if" that checks the total price of the items.
	//If the total price is less than $200, then a shipping cost is added.
	//Otherwise, no shipping cost is added.  If above $500, then a 10%
	//discount is added to the total.
	if (totalItemPrice < 200.00)
	{
		cout << "\n\nThere'll be an additional cost of $9.99 for shipping and handling.\n";
		const double SHIPPINGCOST = 9.99;
		totalItemPrice = totalItemPrice + SHIPPINGCOST;
		shippingAdded = true;
	}
	else if (totalItemPrice >= 200.00 && totalItemPrice <= 500.00)
	{
		//As per the requirement for this lab, this "else if" isn't meant to do
		//anything.  The reason is the "totalItemPrice" doesn't change here.
		//No shipping is added and no discount is added.
	}

	else
	{
		cout << "\nA discount of 10% will be added to the total price"
			" and no shipping cost will be added\n";
		totalItemPrice = totalItemPrice * 0.90;
		discountAdded = true;
	}

	//Outside stating what the user put in for the first and second items
	//also states any additional changes to the total cost based on
	//the booleans and if the optional third item price isn't zero (0.00).
	cout << fixed << setprecision(2) << "\nThe value of the first item is $" << itemPriceOne
		<< ", and the value of the second item is $" << itemPriceTwo;
	if (itemPriceThree != 0.00)
	{
		cout << ", and the price of the third item is $" << itemPriceThree;
	}
	if (shippingAdded == true)
	{
		cout << "\n\nA shipping cost of $9.99 was added to the total.";
	}
	if (discountAdded == true)
	{
		cout << "\n\nA discount of 10% was added to the total.";
	}
	cout << "\n\nThis means the total price should roughly be $" << totalItemPrice
		<< "." << endl;
}