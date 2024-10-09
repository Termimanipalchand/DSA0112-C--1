#include <iostream>
using namespace std;

double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, time;
    int age;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the time in years: ";
    cin >> time;
    cout << "Enter your age: ";
    cin >> age;

    double rate;
    if (age >= 60) { 
        rate = 12.0; 
    } else {
        rate = 10.0; 
    }
    double simpleInterest = calculateSimpleInterest(principal, rate, time);

    cout << "The simple interest is: " << simpleInterest ;

    return 0;
}

