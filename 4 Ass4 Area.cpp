# include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function
    virtual void calculateArea() {
        cout << "Area of Shape" << endl;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Overriding virtual function
    void calculateArea() override {
        float area = length * width;
        cout << "Area of Rectangle = " << area << endl;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    // Overriding virtual function
    void calculateArea() override {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

int main() {
    // Base class pointer
    Shape* shape;

    Rectangle rectangle(10, 5);
    Circle circle(7);

    // Runtime polymorphism
    shape = &rectangle;
    shape->calculateArea();

    shape = &circle;
    shape->calculateArea();

    return 0;
}
       

