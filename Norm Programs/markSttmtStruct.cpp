#include <iostream>
#include <string>
using namespace std;

// Define a structure for a student
struct Student {
    string name;
    int marks[5];     // 5 subjects
    int total;
    float average;
    string result;
};

int main() {
    const int NUM_STUDENTS = 3;
    const int NUM_SUBJECTS = 5;
    Student students[NUM_STUDENTS];

    // Input data
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;

        students[i].total = 0;
        bool pass = true;

        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> students[i].marks[j];

            students[i].total += students[i].marks[j];

            // Assume pass mark is 40
            if (students[i].marks[j] < 40) {
                pass = false;
            }
        }

        students[i].average = students[i].total / (float)NUM_SUBJECTS;
        students[i].result = pass ? "PASS" : "FAIL";
    }

    // Output
    cout << "\n\n--- Student Results ---\n";
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        cout << "\nStudent " << i + 1 << ": " << students[i].name << endl;
        cout << "Marks: ";
        for (int j = 0; j < NUM_SUBJECTS; ++j) {
            cout << students[i].marks[j] << " ";
        }
        cout << "\nTotal: " << students[i].total;
        cout << "\nAverage: " << students[i].average;
        cout << "\nResult: " << students[i].result << endl;
    }

    return 0;
}
