//Lab7-4.cpp - displays the average electric bill
//Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
		double bill, total = 0.0;
		int count = 0;

		cout << "Enter monthly electric bills (enter -1 to end):" << endl;
		cin >> bill;

		while (bill != -1) {
				total += bill;
				count++;
				cin >> bill;
		}

		if (count > 0) {
				double average = total / count;
				cout << "The average electric bill is $" << average << endl;
		} 
		else {
				cout << "No bills were entered." << endl;
		}

		return 0;
}