#include <iostream>
#include <cctype>   // For isdigit(), isalpha(), isspace()

int main() {
    char str[1000];
    int digitCount = 0, specialCharCount = 0;

    std::cout << "Enter a string: ";
    std::cin.getline(str, 1000);  // Read line including spaces

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isdigit(str[i])) {
            digitCount++;
        }
        else if (!isalpha(str[i]) && !isdigit(str[i]) && !isspace(str[i])) {
            // Not a letter, not a digit, not a space → special character
            specialCharCount++;
        }
    }

    std::cout << "\nDigit count: " << digitCount << std::endl;
    std::cout << "Special character count: " << specialCharCount << std::endl;

    return 0;
}
