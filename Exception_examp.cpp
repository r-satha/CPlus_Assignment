
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        // Check for division by zero
        if (denominator == 0) {
            throw denominator;  // Throw exception
        }

        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (int) {
        cout << "Division by zero not possible" << endl;
    }

    return 0;
}