#include <iostream>
#include "enums.h"

void fractionCalculations(const short numerator1, const short denominator1, const short numerator2, const short denominator2, const char sign) {
	switch (sign)
	{
	case signs::plus:
		std::cout << numerator1 << "\n-\n" << denominator1;
		break;
	case signs::minus:
		break;
	case signs::multiply:
		break;
	case signs::divide:
		break;
	default:
		break;
	}
}

