#ifndef CONVERTER_HPP
#define CONVERTER_HPP

// Menu choice constants
const int EXIT_CHOICE = 0;
const int INCHES_TO_CENTIMETERS = 1;
const int CENTIMETERS_TO_INCHES = 2;
const int POUNDS_TO_KILOGRAMS = 3;
const int KILOGRAMS_TO_POUNDS = 4;
const int FAHRENHEIT_TO_CELSIUS = 5;
const int CELSIUS_TO_FAHRENHEIT = 6;

// Conversion constants
const double CENTIMETERS_PER_INCH = 2.54;
const double POUNDS_PER_KILOGRAM = 2.20462;

// Required conversion functions
double inchesToCentimeters(double inches);
double centimetersToInches(double centimeters);
double poundsToKilograms(double pounds);
double kilogramsToPounds(double kilograms);
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);

// Required validation and menu helper functions
bool isValidMenuChoice(int choice);
bool requiresNonNegativeValue(int choice);
bool isValidValueForChoice(int choice, double value);
void printMenu();

#endif
