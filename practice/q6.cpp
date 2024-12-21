#include <iostream>
using namespace std;


void transposeMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    const int rows = 3, cols = 3;
    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int* ptrMatrix[rows];
    for (int i = 0; i < rows; ++i) {
        ptrMatrix[i] = matrix[i];
    }

    transposeMatrix(ptrMatrix, rows, cols);

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}