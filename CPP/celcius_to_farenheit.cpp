#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Prompt the user to enter a temperature in Celsius
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}

//We first prompt the user to enter a temperature in Celsius and store it in the celsius variable. 
//We then use the conversion formula to calculate the temperature in Fahrenheit and store it in the fahrenheit variable. 
//Finally, we display the temperature in Fahrenheit to the user.