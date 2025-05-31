#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n, int r) : name(n), rollNumber(r) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    string name;
    int rollNumber;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your roll number: ";
    cin >> rollNumber;
    cin.ignore();

    Student student(name, rollNumber);

    cout << "\nStudent Information:" << endl;
    student.displayInfo();

    return 0;
}