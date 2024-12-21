#include <iostream>
using namespace std;

// Function to calculate the sum of all elements in a matrix
int sumMatrix(int** matrix, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    const int rows = 3, cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Creating a pointer-to-pointer for the matrix
    int* ptrMatrix[rows];
    for (int i = 0; i < rows; ++i) {
        ptrMatrix[i] = matrix[i];
    }

    cout << "Sum of all elements: " << sumMatrix(ptrMatrix, rows, cols) << endl;

    return 0;
}
