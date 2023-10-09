#include<bits/stdc++.h>
using namespace std;



int main() {
    random_device rd;
    mt19937 gen(rd());

    // Define the Range for the random Numbers
    int lb = 0;
    int ub = 100;

    uniform_int_distribution<int> distribution(lb, ub);

    // Generate a Random number
    int randomNumber = distribution(gen);

    cout << "Welcome to The Number Guessing Game" << endl;
    int guess;
    int tryAttempts = 0;
    
    do {
        // Take input from the User
        cout << "Guess the Number Between 0 to 100: ";
        cin >> guess;
        tryAttempts++;

        // Check the Number is Less or More Than the Random Number
        if (guess < randomNumber) {
            cout << "You are guessing too Low. Please try to guess Higher" << endl;
        }
        else if (guess > randomNumber) {
            cout << "You are guessing too high. Please try to guess Lower" << endl;
        }
        else {
            cout << "Congrats! You Won! You guessed the Correct Number." << endl;
            
        }

    } while (guess != randomNumber);


    return 0;
}
