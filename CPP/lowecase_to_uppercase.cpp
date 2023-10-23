#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char inputString[100];

    cout << "Enter a string: ";
    cin.getline(inputString, 100);

    for (int i = 0; inputString[i] != '\0'; i++) {
        if (islower(inputString[i])) {
            inputString[i] = toupper(inputString[i]);
        } else if (isupper(inputString[i])) {
            inputString[i] = tolower(inputString[i]);
        }
    }

    cout << "Result: " << inputString << endl;

    return 0;
}


// In this modified program, we loop through each character of the input string.
// If the character is lowercase, it is converted to uppercase using toupper(). 
// If the character is uppercase, it is converted to lowercase using tolower(). 
// This way, the program automatically toggles the case of each character in the input string.