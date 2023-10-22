#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString, reversedString;

    // Prompt the user to enter a string
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Reverse the string
    for (int i = inputString.length() - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    // Display the reversed string
    cout << "Reversed string: " << reversedString << endl;

    return 0;
}


//We first prompt the user to enter a string and store it in the inputString variable using getline(). 
//Then, we iterate through the characters of the input string in reverse order and build the reversedString. 
//Finally, we display the reversed string to the user.