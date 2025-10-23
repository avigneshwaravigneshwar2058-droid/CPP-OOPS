#include <iostream>

int main() {
    const int SIZE = 3;
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];

    // Input for first matrix
    std::cout << "Enter elements of first 3x3 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "matrix1[" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }

    // Input for second matrix
    std::cout << "\nEnter elements of second 3x3 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << "matrix2[" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the result
    std::cout << "\nSum of the two matrices:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << sum[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
