
#include <iostream>
using namespace std;

// Define class
class Factorial {
private:
    int num;

public:
    // Function to take input
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Function to calculate factorial
    long long calculateFactorial() {
        long long fact = 1;

        for (int i = 1; i <= num; i++) {
            fact *= i;
        }

        return fact;
    }

    // Function to display result
    void display() {
        cout << "The factorial of " << num << " is: " << calculateFactorial() << endl;
    }
};

int main() {
    Factorial f;

    f.getNumber();
    f.display();

    return 0;
}