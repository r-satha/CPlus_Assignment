#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0}; // ASCII frequency array

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    cout << "Duplicate characters are: ";

    // Print characters that appear more than once
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            cout << char(i) << " ";
        }
    }

    return 0;
}
