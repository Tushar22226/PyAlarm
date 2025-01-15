#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual method in base class
    virtual void area() {
        cout << "Calculating area for shape." << endl;
    }
};

class Circle : public Shape {
public:
    // Override the base class method
    void area() override {
        // Call the base class method
        Shape::area();

        // Calculate and display the area of the circle
        double radius = 5.0; // Example radius
        double area = 3.14 * radius * radius;
        cout << "Area of circle: " << area << endl;
    }
};

int main() {
    Shape* shapePtr;  // Base class pointer

    Circle circle;    // Derived class object
    shapePtr = &circle;

    shapePtr->area();  // Calls Circle's area method

    return 0;
}
