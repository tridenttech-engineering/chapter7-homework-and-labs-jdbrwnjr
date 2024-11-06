//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <JD Brown> on <11-4-2024>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices     = 0;    //counter
	double price      = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice   = 0.0;

	cout << "Price (negative number to end): ";

		while (cin >> price && price >= 0.0) {
				numPrices += 1;
				totalPrice += price;
				cout << "Next price: ";
		}

		if (numPrices > 0)
				avgPrice = totalPrice / numPrices;
		else
				avgPrice = 0.0;

		cout << fixed << setprecision(2) << endl;
		cout << "Average price: " << avgPrice << endl;

		return 0;
}	//end of main function