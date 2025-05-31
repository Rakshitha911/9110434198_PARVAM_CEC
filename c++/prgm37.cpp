#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b); 
};

int Calculator::add(int a, int b) {
    return a + b;
}

class Base {
protected:
    int protectedValue;
};

class Derived : public Base {
public:
    void setValue(int val) {
        protectedValue = val;
    }

    void displayValue() {
        cout << "Protected Value from Base: " << protectedValue << endl;
    }
};

class Circle {
private:
    float radius;

public:
    void inputRadius() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculateArea() {
        float area = 3.1416 * radius * radius;
        cout << "Area of Circle: " << area << endl;
    }
};

class Employee {
public:
    string name;
    int id;

    void input() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> id;
    }

    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Calculator calc;
    int sum = calc.add(5, 10);
    cout << "Sum using Calculator: " << sum << endl;

    Derived d;
    d.setValue(42);
    d.displayValue();

    Circle c;
    c.inputRadius();
    c.calculateArea();
    Employee e1, e2, e3;
    cout << "\nEnter data for Employee 1:\n";
    e1.input();
    cout << "\nEnter data for Employee 2:\n";
    e2.input();
    cout << "\nEnter data for Employee 3:\n";
    e3.input();

    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();
    e3.display();

    return 0;
}