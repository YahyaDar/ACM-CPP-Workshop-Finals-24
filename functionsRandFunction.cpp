// Make a function that has the same functionality as a 6 sided fair die
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For seeding srand()

using namespace std;

// Function to simulate a 6-sided die roll
int rollDie() {
    return (rand() % 6) + 1; // Generate a number between 1 and 6
    // Remember: rand()%11 generates values from 0-10...
}

int main() {
    // Seed the random number generator with the current time
    // Remember to set the seed value to get a different "random" number every time
    // Always set the seed in main function
    srand(time(0));

    // Roll the die and print the result
    cout << "You rolled a: " << rollDie() << endl;

    return 0;
}
