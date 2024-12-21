#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
    
}

// Function to calculate nPr
int nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int n, r;
    cout << "Enter the values of n and r: ";
    cin >> n >> r;

    cout << "nPr = " << nPr(n, r) << endl;

    return 0;
}
