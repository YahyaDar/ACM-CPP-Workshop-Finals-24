#include <iostream>
using namespace std;

// Fibonacci: Each number is the sum of the two numbers that precede it
// 0 1 1 2 3 5 8 13 21
// Remember: The 7th index of the fibonacci sequence is: 13

// Fibonacci Example
int fibonacci(int n) {
    if (n <= 1)
        return n; // F(0) = 0, F(1) = 1
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci sequence up to " << n << "th term:" << endl;
    for (int i = 0; i <= n; ++i) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;
    return 0;
}