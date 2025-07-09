#include <iostream>
using namespace std;

float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

float celsiusToKelvin(float c) {
    return c + 273.15;
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

float fahrenheitToKelvin(float f) {
    return (f - 32) * 5.0 / 9.0 + 273.15;
}

float kelvinToCelsius(float k) {
    return k - 273.15;
}

float kelvinToFahrenheit(float k) {
    return (k - 273.15) * 9.0 / 5.0 + 32;
}

int main() {
    int choice;
    float temp, result;

    cout << "===== Temperature Converter =====" << endl;

    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Celsius to Fahrenheit & Kelvin" << endl;
        cout << "2. Fahrenheit to Celsius & Kelvin" << endl;
        cout << "3. Kelvin to Celsius & Fahrenheit" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                cout << "Fahrenheit: " << celsiusToFahrenheit(temp) << " °F" << endl;
                cout << "Kelvin: " << celsiusToKelvin(temp) << " K" << endl;
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                cout << "Celsius: " << fahrenheitToCelsius(temp) << " °C" << endl;
                cout << "Kelvin: " << fahrenheitToKelvin(temp) << " K" << endl;
                break;
            case 3:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                cout << "Celsius: " << kelvinToCelsius(temp) << " °C" << endl;
                cout << "Fahrenheit: " << kelvinToFahrenheit(temp) << " °F" << endl;
                break;
            case 4:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
        }
    } while(choice != 4);

    return 0;
}
