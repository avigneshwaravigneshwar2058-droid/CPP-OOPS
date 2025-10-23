#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks[5];
    int total;
    float average;
    string result;

public:
    // Function to input student details
    void inputData(int studentNumber) {
        cout << "\nEnter details for Student " << studentNumber << ":\n";
        cout << "Name: ";
        cin >> name;

        total = 0;
        bool pass = true;

        for (int i = 0; i < 5; ++i) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];

            total += marks[i];
            if (marks[i] < 40) {
                pass = false;
            }
        }

        average = total / 5.0f;
        result = pass ? "PASS" : "FAIL";
    }

    // Function to display student details
    void displayData(int studentNumber) const {
        cout << "\nStudent " << studentNumber << ": " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] << " ";
        }
        cout << "\nTotal: " << total;
        cout << "\nAverage: " << average;
        cout << "\nResult: " << result << endl;
    }
};

int main() {
    const int NUM_STUDENTS = 3;
    Student students[NUM_STUDENTS];

    // Input details
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        students[i].inputData(i + 1);
    }

    // Display results
    cout << "\n\n--- Student Results ---\n";
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        students[i].displayData(i + 1);
    }

    return 0;
}

