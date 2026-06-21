#include "converter.hpp"
#include <cassert>
#include <cmath>
#include <iostream>

using namespace std;

bool nearlyEqual(double actual, double expected, double tolerance = 0.0001) {
    return fabs(actual - expected) <= tolerance;
}

void testLengthConversions() {
    assert(nearlyEqual(inchesToCentimeters(1.0), 2.54));
    assert(nearlyEqual(inchesToCentimeters(10.0), 25.4));
    assert(nearlyEqual(centimetersToInches(2.54), 1.0));
    assert(nearlyEqual(centimetersToInches(25.4), 10.0));
}

void testWeightConversions() {
    assert(nearlyEqual(poundsToKilograms(2.20462), 1.0));
    assert(nearlyEqual(poundsToKilograms(22.0462), 10.0));
    assert(nearlyEqual(kilogramsToPounds(1.0), 2.20462));
    assert(nearlyEqual(kilogramsToPounds(10.0), 22.0462));
}

void testTemperatureConversions() {
    assert(nearlyEqual(fahrenheitToCelsius(32.0), 0.0));
    assert(nearlyEqual(fahrenheitToCelsius(212.0), 100.0));
    assert(nearlyEqual(celsiusToFahrenheit(0.0), 32.0));
    assert(nearlyEqual(celsiusToFahrenheit(100.0), 212.0));
    assert(nearlyEqual(celsiusToFahrenheit(-40.0), -40.0));
    assert(nearlyEqual(fahrenheitToCelsius(-40.0), -40.0));
}

void testMenuValidation() {
    assert(isValidMenuChoice(0));
    assert(isValidMenuChoice(1));
    assert(isValidMenuChoice(6));
    assert(!isValidMenuChoice(-1));
    assert(!isValidMenuChoice(7));
}

void testNonNegativeRules() {
    assert(requiresNonNegativeValue(INCHES_TO_CENTIMETERS));
    assert(requiresNonNegativeValue(CENTIMETERS_TO_INCHES));
    assert(requiresNonNegativeValue(POUNDS_TO_KILOGRAMS));
    assert(requiresNonNegativeValue(KILOGRAMS_TO_POUNDS));
    assert(!requiresNonNegativeValue(FAHRENHEIT_TO_CELSIUS));
    assert(!requiresNonNegativeValue(CELSIUS_TO_FAHRENHEIT));
}

void testValueValidation() {
    assert(isValidValueForChoice(INCHES_TO_CENTIMETERS, 12.0));
    assert(!isValidValueForChoice(INCHES_TO_CENTIMETERS, -12.0));

    assert(isValidValueForChoice(POUNDS_TO_KILOGRAMS, 5.0));
    assert(!isValidValueForChoice(POUNDS_TO_KILOGRAMS, -5.0));

    assert(isValidValueForChoice(FAHRENHEIT_TO_CELSIUS, -40.0));
    assert(isValidValueForChoice(CELSIUS_TO_FAHRENHEIT, -40.0));

    assert(!isValidValueForChoice(99, 10.0));
}

int main() {
    testLengthConversions();
    testWeightConversions();
    testTemperatureConversions();
    testMenuValidation();
    testNonNegativeRules();
    testValueValidation();

    cout << "All Lab 2.2 converter tests passed!" << endl;
    return 0;
}
