#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void calculateArea() = 0;
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    float length, width;
    
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void calculateArea() {
        float area = length * width;
        cout << "Area of Rectangle: " << area << endl;
    }
};

// Derived class: Triangle
class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) {
        base = b;
        height = h;
    }

    void calculateArea() {
        float area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    float length, width, base, height;

    // Input for rectangle
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;

    // Input for triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    // Creating objects
    Shape* s1;
    Shape* s2;

    Rectangle r(length, width);
    Triangle t(base, height);

    // Using base class pointer (runtime polymorphism)
    s1 = &r;
    s2 = &t;

    s1->calculateArea();
    s2->calculateArea();

    return 0;
}
