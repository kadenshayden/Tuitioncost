#include <iostream>

using namespace std;

#define unitCost 31.00;

// Function Prototypes
double calcTuiton(double total, double units, double studentFees);
void output(double total);

int main() {
	double units, studentFees, total;
	cout << "How many units are you taking this quarter? ";
	cin >> units;

	cout << "What are the fees for this quarter? $";
	cin >> studentFees;

	calcTuiton(total, units, studentFees);
	output(total);
}

double calcTuiton(double total, double units, double studentFees) {
	total = units * unitCost + studentFees;
	return 0;
}

void output(double total) {
	cout << "your total is " << total;
}
