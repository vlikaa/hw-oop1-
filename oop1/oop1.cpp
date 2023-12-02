

#include <iostream>
#include <conio.h>
#include "fraction.h"
#include "functions.h"

using namespace std;

int main()
{
	fraction fraction1, fraction2;
	short userSymbol;
	cout << "Enter first numerator: ";
	cin >> fraction1.numerator;
	cout << "Enter first denominator: ";
	cin >> fraction1.denominator;
	if (fraction1.denominator == 0) {
		cout << "\n    The denominator cannot be zero\n";
		return 0;
	}
	system("cls");
	cout << "Enter second numerator: ";
	cin >> fraction2.numerator;
	cout << "Enter second denominator: ";
	cin >> fraction2.denominator;
	if (fraction2.denominator == 0) {
		cout << "\n    The denominator cannot be zero\n";
		return 0;
	}
	
	system("cls");
	cout << "    Select operation:"
		<< "\n\t1. plus"
		<< "\n\t2. minus"
		<< "\n\t3. multiply"
		<< "\n\t4. divide\n";
	userSymbol = _getch();
	fractionCalculations(fraction1.numerator, fraction1.denominator, fraction2.numerator, fraction2.denominator, userSymbol);

}

