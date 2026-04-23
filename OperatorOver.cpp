
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // + operator as MEMBER function
    Number operator+(Number n) {
        return Number(value + n.value);
    }

    // Friend functions for other operators
    friend Number operator-(Number n1, Number n2);
    friend Number operator*(Number n1, Number n2);

    // Display function
    void display() {
        cout << value;
    }
};

// Friend function definitions
Number operator-(Number n1, Number n2) {
    return Number(n1.value - n2.value);
}

Number operator*(Number n1, Number n2) {
    return Number(n1.value * n2.value);
}

int main() {
    Number n1(10), n2(5), n3(3);

    // Using member operator +
    Number sum = n1 + n2;

    // Using friend operators
    Number diff = n1 - n2;
    Number prod = n1 * n2;

    // Chaining with + (member function)
    Number result = n1 + n2 + n3;

    cout << "Sum of two numbers (using member): ";
    sum.display();
    cout << endl;

    cout << "Difference (- using friend): ";
    diff.display();
    cout << endl;

    cout << "Product (* using friend): ";
    prod.display();
    cout << endl;

    cout << "Sum of three numbers (n1 + n2 + n3): ";
    result.display();
    cout << endl;

    return 0;
}