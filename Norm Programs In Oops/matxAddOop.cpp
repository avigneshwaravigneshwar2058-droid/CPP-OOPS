#include <iostream>
using namespace std;

class Matrix {
private:
    static const int SIZE = 3;
    int data[SIZE][SIZE];

public:
    // Function to input matrix elements
    void inputMatrix(const string &name) {
        cout << "\nEnter elements of " << name << " 3x3 matrix:\n";
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << name << "[" << i << "][" << j << "]: ";
                cin >> data[i][j];
            }
        }
    }

    // Function to add two matrices
    Matrix addMatrix(const Matrix &m2) const {
        Matrix result;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                result.data[i][j] = data[i][j] + m2.data[i][j];
            }
        }
        return result;
    }

    // Function to display the matrix
    void displayMatrix(const string &title) const {
        cout << "\n" << title << ":\n";
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                cout << data[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix matrix1, matrix2, sum;

    // Input matrices
    matrix1.inputMatrix("Matrix 1");
    matrix2.inputMatrix("Matrix 2");

    // Add and display result
    sum = matrix1.addMatrix(matrix2);
    sum.displayMatrix("Sum of the two matrices");

    return 0;
}

