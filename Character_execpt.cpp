
#include <iostream>
using namespace std;

int main() {
    int num;
    char ch;

    // Integer input
    try {
        cout << "Enter an integer: ";
        cin >> num;

        // Check if input failed (not an integer)
        if (cin.fail()) {
            throw num;
        }

        cout << "You entered integer: " << num << endl;
    }
    catch (int) {
        cout << "Invalid integer input" << endl;
        cin.clear();              // Clear error flag
        cin.ignore(1000, '\n');   // Discard invalid input
    }

    // Character input
    try {
        cout << "Enter a character: ";
        cin >> ch;

        // Check if input is not a character (extra validation)
        if (!isalpha(ch)) {
            throw ch;
        }

        cout << "You entered character: " << ch << endl;
    }
    catch (char) {
        cout << "Invalid character input" << endl;
    }

    return 0;
}