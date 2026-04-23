
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[100], subStr[50];

    // Input
    cout << "Enter main string: ";
    cin.getline(mainStr, 100);

    cout << "Enter substring: ";
    cin.getline(subStr, 50);

    char *pMain = mainStr;
    char *pSub = subStr;

    int mainLen = strlen(mainStr);
    int subLen = strlen(subStr);

    cout << "Starting positions of substring '" << subStr << "':" << endl;

    // Traverse using pointers
    for (int i = 0; i <= mainLen - subLen; i++) {
        char *p1 = pMain + i;  // pointer to current position in main string
        char *p2 = pSub;       // pointer to substring

        // Compare substring using pointers
        while (*p2 != '\0' && *p1 == *p2) {
            p1++;
            p2++;
        }

        // If end of substring reached → match found
        if (*p2 == '\0') {
            cout << "Position " << i << endl;
        }
    }

    return 0;
}