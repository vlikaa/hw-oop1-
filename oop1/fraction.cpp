#include "fraction.h"

void fraction::setNumerator(short numerator) {
	_numerator = numerator;
}

short fraction::getNumerator() {
	return _numerator;
}

void fraction::setDenominator(short denominator) {
	_denominator = denominator;
}

short fraction::getDenominator() {
	return _denominator;
}