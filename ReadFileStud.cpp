
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("student_info.txt");

    // Check if file opened successfully
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Content from 'student_info.txt':" << endl;

    // Read and display file content line by line
    while (getline(file, line)) {
        cout << line << endl;
    }

    // Close the file
    file.close();

    return 0;
}