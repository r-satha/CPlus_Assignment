
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string name;
    int studentClass, age;

    // Taking input
    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter student's class: ";
    cin >> studentClass;

    cout << "Enter student's age: ";
    cin >> age;

    // Creating and opening file
    ofstream file("student_info.txt");

    // Writing data in structured format
    file << name << ", " << studentClass << ", " << age;

    // Closing file
    file.close();

    cout << "Data successfully written to student_info.txt" << endl;

    return 0;
}