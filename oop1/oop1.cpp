

#include <iostream>
#include "fraction.h"
#include "functions.h"

using namespace std;

int main()
{
	cout << int('+') << endl;
	cout << int('-') << endl;
	cout << int('*') << endl;
	cout << int('/') << endl;
	fraction fraction1, fraction2;
	short fNumerator, fDenominator,
		sNumerator, sDenominator;
	cout << "Enter first numerator: ";
	cin >> fNumerator;
	cout << "Enter first denominator: ";
	cin >> fDenominator;
	fraction1.setNumerator(fNumerator);
	fraction1.setDenominator(fDenominator);

	system("cls");
	cout << "Enter second numerator: ";
	cin >> sNumerator;
	cout << "Enter second denominator: ";
	cin >> sDenominator;
	fraction2.setNumerator(sNumerator);
	fraction2.setDenominator(sDenominator);
	
	fractionCalculations(fraction1.getNumerator(), fraction1.getDenominator(), fraction2.getNumerator(), fraction2.getDenominator(), '+');

}

