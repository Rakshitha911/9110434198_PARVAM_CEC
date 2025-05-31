#include <iostream>
#include <cmath>    // For M_PI

using namespace std;

// Base class
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Rectangle subclass
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

// Circle subclass
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Triangle subclass
class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

// Main Program
int main() {
    Shape* shapes[3];
    shapes[0] = new Rectangle(10, 5);
    shapes[1] = new Circle(7);
    shapes[2] = new Triangle(6, 4);

    for (int i = 0; i < 3; ++i) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
        delete shapes[i]; // Free memory
    }

    return 0;
}