#include <iostream>
using namespace std;

// Define structure
struct Student {
    string name;
    int age;
    char grade;
};

int main() {
    // Create two student objects
    Student s1, s2;

    // Initialize student 1
    s1.name = "John Doe";
    s1.age = 20;
    s1.grade = 'A';

    // Initialize student 2
    s2.name = "Jane Smith";
    s2.age = 22;
    s2.grade = 'B';

    // Display student 1 details
    cout << "Student 1:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Grade: " << s1.grade << endl;

    cout << endl;

    // Display student 2 details
    cout << "Student 2:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Grade: " << s2.grade << endl;

    return 0;
}
