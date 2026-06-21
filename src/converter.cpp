#include "converter.hpp"
#include <iostream>

using namespace std;

double inchesToCentimeters(double inches) {
    // TODO: return inches converted to centimeters.
    return 0.0;
}

double centimetersToInches(double centimeters) {
    // TODO: return centimeters converted to inches.
    return 0.0;
}

double poundsToKilograms(double pounds) {
    // TODO: return pounds converted to kilograms.
    return 0.0;
}

double kilogramsToPounds(double kilograms) {
    // TODO: return kilograms converted to pounds.
    return 0.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    // TODO: return Fahrenheit converted to Celsius.
    return 0.0;
}

double celsiusToFahrenheit(double celsius) {
    // TODO: return Celsius converted to Fahrenheit.
    return 0.0;
}

bool isValidMenuChoice(int choice) {
    // TODO: return true when choice is between EXIT_CHOICE and CELSIUS_TO_FAHRENHEIT.
    return false;
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
    // TODO: return true for choices 1 through 4.
    return false;
}

bool isValidValueForChoice(int choice, double value) {
    // TODO:
    // 1. Invalid menu choices should return false.
    // 2. Length and weight conversions should reject negative values.
    // 3. Temperature conversions should allow negative values.
    return false;
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
