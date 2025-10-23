#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a 5-digit number: ";
    cin >> num;

    // Check if it's really a 5-digit number
    if (num < 10000 || num > 99999) {
        cout << "Invalid input! Please enter a 5-digit number." << endl;
        return 1;
    }

    // Extract and sum digits
    while (num > 0) {
        int digit = num % 10;  // get last digit
        sum += digit;          // add it to sum
        num /= 10;             // remove last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
