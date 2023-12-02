#include <iostream>
#include "enums.h"

void fractionCalculations(const short, const short, const short, const short, const char);

short findMaxNumber(const short, const short);

short find—ommonDenominator(const short, const short);


void fractionCalculations(const short numerator1, const short denominator1, short numerator2, short denominator2, const char sign) {
	system("cls");
	short commonDenominator, 
		resultNumerator;
	switch (sign)
	{
	case signs::plus:
		commonDenominator = find—ommonDenominator(denominator1, denominator2);
		resultNumerator = numerator1 * (commonDenominator / denominator1) + numerator2 * (commonDenominator / denominator2);
		std::cout << "\n\t" << numerator1 << '/' << denominator1 << " + "
			<< numerator2 << '/' << denominator2 << " = " 
			<< resultNumerator << '/' << commonDenominator << std::endl;
		break;
	case signs::minus:
		commonDenominator = find—ommonDenominator(denominator1, denominator2);
		resultNumerator = numerator1 * (commonDenominator / denominator1) - numerator2 * (commonDenominator / denominator2);
		std::cout << "\n\t" << numerator1 << '/' << denominator1 << " - "
			<< numerator2 << '/' << denominator2 << " = "
			<< resultNumerator << '/' << commonDenominator << std::endl;
		break;
	case signs::multiply:
		commonDenominator = denominator1 * denominator2;
		resultNumerator = numerator1 * numerator2;
		std::cout << "\n\t" << numerator1 << '/' << denominator1 << " * "
			<< numerator2 << '/' << denominator2 << " = "
			<< resultNumerator << '/' << commonDenominator << std::endl;
		break;
	case signs::divide:
		if (numerator2 == 0) {
			std::cout << "\n    You can't divide by zero!\n";
			return;
		}
		std::swap(numerator2, denominator2);
		commonDenominator = denominator1 * denominator2;
		resultNumerator = numerator1 * numerator2;
		std::cout << "\n\t" << numerator1 << '/' << denominator1 << " * "
			<< numerator2 << '/' << denominator2 << " = "
			<< resultNumerator << '/' << commonDenominator << std::endl;
		break;
	default:
		break;
	}
}

short findMaxNumber(const short firstNumber, const short secondNumber) {
	if (firstNumber == secondNumber)
		return -1;
	return firstNumber > secondNumber ? firstNumber : secondNumber;
}

short find—ommonDenominator(const short denominator1, const short denominator2) {
	short commonDenominator = findMaxNumber(denominator1, denominator2);
	if (commonDenominator == -1)
		return denominator1;

	while (true) {
		if (commonDenominator % denominator1 == 0 && commonDenominator % denominator2 == 0) {
			return commonDenominator;
		}
		commonDenominator++;
	}
	return commonDenominator;
}
