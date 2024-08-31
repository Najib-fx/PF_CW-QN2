#include <iostream>
#include <vector>
using namespace std;

//Function to get the divisors of a positive integer in decreasing order
vector<int> getDivisors(int num) {
    vector<int> divisors;
    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int main() {
    int num;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly tell you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";

    do {
        cout << "Please enter a positive integer: ";
        while (true) {
            cin >> num;
            if (num <= 0) {
                cout << num << " is not a positive integer.\n";
                cout << "Please enter a positive integer: ";
            } else {
                break;
            }
        }

        // Get and print divisors
        vector<int> divisors = getDivisors(num);
        for (int divisor : divisors) {
            cout << divisor << endl;
        }

        // We get another integer
        while (true) {
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                break; // Continue looping
            } else if (choice == 'N' || choice == 'n') {
                cout << "Goodbye!" << endl;
                return 0; //The End
            } else {
                cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            }
        }
    } while (true);

    return 0;
}
