#include <iostream>
using namespace std;

// Define class
class Number {
private:
    int num;

public:
    // Function to take input
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Function to reverse the number
    int reverseNumber() {
        int rev = 0, remainder;
        int temp = num;

        while (temp != 0) {
            remainder = temp % 10;
            rev = rev * 10 + remainder;
            temp /= 10;
        }

        return rev;
    }

    // Function to display result
    void display() {
        cout << "The original number is: " << num << endl;
        cout << "The reverse of the number is: " << reverseNumber() << endl;
    }
};

int main() {
    Number n;

    n.getNumber();
    n.display();

    return 0;
}
