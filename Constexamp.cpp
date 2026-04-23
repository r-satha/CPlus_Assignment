#include <iostream>
using namespace std;

class Student {
private:
    int id;

public:
    // Constructor
    Student(int i) {
        id = i;
        cout << "Constructor called. Student ID: " << id << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called. Student ID: " << id << " is destroyed." << endl;
    }
};

int main() {
    cout << "Start of main function" << endl;

    {
        // Object created inside a block
        Student s1(101);
        cout << "Inside the block" << endl;
    } // Object goes out of scope here → Destructor is called

    cout << "End of main function" << endl;

    return 0;
}
