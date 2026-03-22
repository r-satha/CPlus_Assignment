#include <iostream>
using namespace std;

// Function to find maximum of two numbers
int max_two(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = max_two(num1, num2);

    cout << "The maximum number is: " << result << endl;

    return 0;
}
