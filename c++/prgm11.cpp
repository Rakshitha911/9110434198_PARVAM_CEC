#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, time;

    cout << "Enter principal amount:" ;
    cin >> principal;
    cout << "Enter interest rate (per year): ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100;
    cout << "simple Interest: " << simpleInterest << endl;

    double compoundInterest = principal * (pow(1 + (rate / 100), time)) - principal;
    cout << "Compount Interest: " << compoundInterest << endl;

    return 0;
}