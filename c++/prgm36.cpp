#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b);
    int subtract(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
};

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

int Calculator::divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main() {
    Calculator calculator;

    int num1 = 10;
    int num2 = 2;

    cout << "Addition: " << calculator.add(num1, num2) << endl;
    cout << "Subtraction: " << calculator.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calculator.multiply(num1, num2) << endl;
    cout << "Division: " << calculator.divide(num1, num2) << endl;

    return 0;
}