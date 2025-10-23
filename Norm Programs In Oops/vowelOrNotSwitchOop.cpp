#include <iostream>
using namespace std;

class CharClassifier {
private:
    char ch;  // Character to classify

public:
    // Function to get input
    void getInput() {
        cout << "Enter a character: ";
        cin >> ch;
    }

    // Function to classify the character
    void classify() const {
        // Check if it's a number
        if (ch >= '0' && ch <= '9') {
            cout << "It is a number." << endl;
        } 
        // Check if it's a letter
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            switch (ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    cout << "It is a vowel." << endl;
                    break;
                default:
                    cout << "It is a consonant." << endl;
                    break;
            }
        } 
        // Special character
        else {
            cout << "It is neither a letter nor a number (special character)." << endl;
        }
    }
};

int main() {
    CharClassifier classifier;
    classifier.getInput();
    classifier.classify();

    return 0;
}

