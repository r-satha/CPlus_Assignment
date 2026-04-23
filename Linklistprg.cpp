
#include <iostream>
#include <list>
using namespace std;

// Display elements
void display(const list<int> &lst) {
    if (lst.empty()) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "Elements in the linked list:" << endl;
    for (int val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;
    int choice, value;

    do {
        cout << "\n--- Linked List Menu ---" << endl;
        cout << "1. Insert at End" << endl;
        cout << "2. Insert at Beginning" << endl;
        cout << "3. Delete Element" << endl;
        cout << "4. Display List" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                myList.push_back(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                myList.push_front(value);
                break;

            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                myList.remove(value);
                cout << "Element removed (if it existed)." << endl;
                break;

            case 4:
                display(myList);
                break;

            case 5:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}