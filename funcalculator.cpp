#include <iostream>
#include <cmath>   // for pow()
using namespace std;

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

double power(double a, double b) {
    return pow(a, b);
}

int main() {
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    double result;

    switch(op) {
        case '+':
            result = add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0)
                cout << "Result: " << result << endl;
            break;
        case '^':
            result = power(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
