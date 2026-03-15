#include <iostream>
#include <limits>

int main() {
    int choice;
    while (true) {
        std::cout << "Simple Integer Calculator\n";
        std::cout << "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Quit\n";
        std::cout << "Choose an operation (1-5): ";

        if (!(std::cin >> choice)) {
            std::cout << "Invalid input. Please enter a number between 1 and 5.\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (choice == 5) {
            std::cout << "Goodbye! Exit the Calculator.\n";
            break;
        }

        if (choice < 1 || choice > 5) {
            std::cout << "Invalid choice. Try again.\n\n";
            continue;
        }

        int a, b;
        std::cout << "Enter two integers separated by space: ";
        if (!(std::cin >> a >> b)) {
            std::cout << "Invalid number input. Please enter integer values.\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        int result;
        switch (choice) {
            case 1:
                result = a + b;
                std::cout << a << " + " << b << " = " << result << "\n\n";
                break;
            case 2:
                result = a - b;
                std::cout << a << " - " << b << " = " << result << "\n\n";
                break;
            case 3:
                result = a * b;
                std::cout << a << " * " << b << " = " << result << "\n\n";
                break;
            case 4:
                if (b == 0) {
                    std::cout << "Error: Division by zero is undefined.\n\n";
                } else {
                    result = a / b; // integer division
                    std::cout << a << " / " << b << " = " << result << " (integer division)\n\n";
                }
                break;
            default:
                std::cout << "Unknown operation.\n\n";
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
