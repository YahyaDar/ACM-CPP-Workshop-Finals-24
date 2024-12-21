#include <iostream>
using namespace std;

// Function to calculate the sum and count of even boundary elements
void calculateBoundary(int** grid, int rows, int cols, int& sum, int& evenCount) {
    sum = 0;
    evenCount = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Check if the element is on the boundary
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += grid[i][j];
                if (grid[i][j] % 2 == 0) {
                    evenCount++;
                }
            }
        }
    }
}

int main() {
    const int rows = 3, cols = 4;
    int grid[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // pointer-to-pointer
    int* ptrGrid[rows];
    for (int i = 0; i < rows; ++i) {
        ptrGrid[i] = grid[i];
    }

    int sum, evenCount;
    calculateBoundary(ptrGrid, rows, cols, sum, evenCount);

    cout << "Sum of boundary elements: " << sum << endl;
    cout << "Count of even boundary elements: " << evenCount << endl;

    return 0;
}
