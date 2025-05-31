#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    float baseSalary;

protected:
    Employee(string n, int i, float b) : name(n), id(i), baseSalary(b) {}

    virtual float calculateSalary() {
        return baseSalary;
    }

public:
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    float bonus;

public:
    Manager(string n, int i, float bSalary, float b)
        : Employee(n, i, bSalary), bonus(b) {}

    float calculateSalary() override {
        return baseSalary + bonus;
    }

    void display() override {
        cout << "Manager Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

class Developer : public Employee {
private:
    float overtimePay;

public:
    Developer(string n, int i, float bSalary, float otPay)
        : Employee(n, i, bSalary), overtimePay(otPay) {}

    float calculateSalary() override {
        return baseSalary + overtimePay;
    }

    void display() override {
        cout << "Developer Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Manager mgr("Alice Johnson", 101, 5000.0f, 1200.0f);    
    Developer dev("Bob Smith", 202, 4000.0f, 800.0f);        

    mgr.display();
    cout << endl;
    dev.display();

    return 0;
}