#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessTheNumber() {
    srand(time(0));
    int number = rand() % 1000 + 1; // Random number between 1 and 1000
    int guess;
    char playAgain;

    cout << "I have a number between 1 and 1000.\nCan you guess my number?\n";

    do {
        cout << "Please type your first guess: ";
        cin >> guess;

        while (guess != number) {
            if (guess < number) {
                cout << "Too low. Try again: ";
            } else {
                cout << "Too high. Try again: ";
            }
            cin >> guess;
        }

        cout << "Excellent! You guessed the number!\n";
        cout << "Would you like to play again (y or n)? ";
        cin >> playAgain;

        if (playAgain == 'y' || playAgain == 'Y') {
            number = rand() % 1000 + 1; // Generate a new number to start again
        }
        

    } while (playAgain == 'y');
}

int main() {
    guessTheNumber();
    return 0;
}
