#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char ch;
    bool found = false;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to search: ";
    cin >> ch;

    // Search for the character
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ch) {
            cout << "Character found at index: " << i << endl;
            found = true;
//            break; // remove this if you want all positions
        }
    }

    if (!found) {
        cout << "Character not found in the string.";
    }

    return 0;
}