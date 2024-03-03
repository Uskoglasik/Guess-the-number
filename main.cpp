#include <iostream> // Connecting libraries
#include <time.h>
using namespace std; // using namespace

int main() // function create
{
    srand(time(NULL)); // add random 

    int guess; // Creating Variables
    long range;

    cout << "Select a positive range of numbers to select: \n";
    cin >> range;
    while (range <= 0) {
        cout << "Error: The range should be a positive number. Please enter a new range: \n";
        cin >> range;
    }

    int number = 1 + rand() % range; // add rand()

    cout << "Guess a number from 1 to " << range << endl; // Entering a number
    cin >> guess;

    if (guess < number)               // guess a number
        cout << "The number is less! ";
    else if (guess > number)
        cout << "The number is greater! ";
    else 
        cout << "You win! \n";

    while (guess != number) // while 
    {
        cout << "Guess a number from 1 to " << range << endl; // Entering a number
        cin >> guess;
        if (guess < number)               // guess a number
            cout << "The number is less! ";
        else if (guess > number)
            cout << "The number is greater! ";
        else
        {
            cout << "You win! \n";
            break;
        }
    }

    cout << "Thanks for game! \n";

    return 0;
}