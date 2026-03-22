//To Find the perfect numbers between 1 to 500
#include <iostream>
using namespace std;

int main() {
    cout << "The perfect numbers between 1 to 500 are: ";
    
    for(int num = 1; num <= 500; num++) {
        int sum = 0;

        // Find sum of proper divisors
        for(int i = 1; i <= num / 2; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }

        // Check if number is perfect
        if(sum == num && num != 0) {
            cout << num << " ";
        }
    }

    return 0;
}