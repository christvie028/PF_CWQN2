#include <iostream>
#include <vector>

using namespace std;

void printDivisors(int number) {
    vector<int> divisors; // Vector to store divisors

    // Find divisors
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i); // Store the divisor
        }
    }

    // Print divisors in decreasing order
    for (int i = divisors.size() - 1; i >= 0; --i) {
        cout << divisors[i] << endl;
    }
}

int main() {
    cout << "This program will display the positive divisors of positive integers you provide." << endl;
    cout << "You can terminate the program by entering a negative integer or zero." << endl;

    while (true) {
        int number;

        // Prompt user for input
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Check for termination conditions
        if (number <= 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "The program can be terminated by entering a negative integer or zero." << endl;
            continue; // Prompt again
        }

        // Print divisors
        printDivisors(number);

        // Ask if the user wants to continue
        char choice;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Validate user input for continuation
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

        // Exit if the user chooses 'N' or 'n'
        if (choice == 'N' || choice == 'n') {
            break;
        }
    }

    cout << "Thank you for using the program. Goodbye!" << endl;
    return 0;
}
