#include <iostream>
using namespace std;

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float fahrenheitToKelvin(float fahrenheit) {
    return celsiusToKelvin(fahrenheitToCelsius(fahrenheit));
}

float kelvinToFahrenheit(float kelvin) {
    return celsiusToFahrenheit(kelvinToCelsius(kelvin));
}

int main() {
    int choice;
    float temp;

    while (true) {
        cout << "\nTemperature Conversion Tool\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Celsius to Kelvin\n";
        cout << "4. Kelvin to Celsius\n";
        cout << "5. Fahrenheit to Kelvin\n";
        cout << "6. Kelvin to Fahrenheit\n";
        cout << "7. Exit\n";
        cout << "Select conversion (1-7): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                cout << temp << "°C = " << celsiusToFahrenheit(temp) << "°F\n";
                break;
            case 2:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                cout << temp << "°F = " << fahrenheitToCelsius(temp) << "°C\n";
                break;
            case 3:
                cout << "Enter temperature in Celsius: ";
                cin >> temp;
                cout << temp << "°C = " << celsiusToKelvin(temp) << "K\n";
                break;
            case 4:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                cout << temp << "K = " << kelvinToCelsius(temp) << "°C\n";
                break;
            case 5:
                cout << "Enter temperature in Fahrenheit: ";
                cin >> temp;
                cout << temp << "°F = " << fahrenheitToKelvin(temp) << "K\n";
                break;
            case 6:
                cout << "Enter temperature in Kelvin: ";
                cin >> temp;
                cout << temp << "K = " << kelvinToFahrenheit(temp) << "°F\n";
                break;
            case 7:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
