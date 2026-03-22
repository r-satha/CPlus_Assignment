#include <iostream>
using namespace std;

// Function to check eligibility
bool isEligible(int age) {
    return age >= 18;
}

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (isEligible(age)) {
        cout << "The person is eligible to vote.";
    } else {
        cout << "The person is not eligible to vote.";
    }

    return 0;
}
