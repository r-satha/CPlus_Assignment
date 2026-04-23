#include <iostream>
using namespace std;

class FnOverload {
public:
    // Function with two integers
    int sum(int a, int b) {
        return a + b;
    }

    // Function with two doubles
    double sum(double a, double b) {
        return a + b;
    }

    // Function with three integers
    int sum(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    FnOverload fnc;

    // Example 1
    cout << "Example 1: Function with two integers" << endl;
    cout << "Sum of two integers: " << fnc.sum(4, 6) << endl;
    cout << endl;

    // Example 2
    cout << "Example 2: Function with two doubles" << endl;
    cout << "Sum of two doubles: " << fnc.sum(3.5, 5.0) << endl;

    cout << endl;

    // Example 3
    cout << "Example 3: Function with three integers" << endl;
    cout << "Sum of three integers: " << fnc.sum(4, 5, 6) << endl;
    return 0;
}
