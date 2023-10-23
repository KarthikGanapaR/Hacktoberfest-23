#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0;

    // Prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num; // Save the original number

    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome." << endl;
    } else {
        cout << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}

// We prompt the user to enter an integer.
// We save the original number in the originalNum variable.
// We use a while loop to reverse the number.
// Inside the loop, we find the last digit of the number (remainder) and add it to the reversedNum after shifting the existing digits.
// We remove the last digit from the original number.
// After the loop, we compare the originalNum and reversedNum to determine if the integer is a palindrome.
// We display the result to the user.