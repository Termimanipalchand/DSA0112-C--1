#include<iostream>
using namespace std;

class Car {
public:
    int id;
    string name;
    int marks;

    static int objectCount;

    Car(int i, string n, int m) {
        id = i;
        name = n;
        marks = m;
        objectCount++; 
    }

    void displayCar() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int Car::objectCount = 0;

int main() {
    int id1, marks1;
    string name1;
    cout << "Enter the Id of the Car: ";
    cin >> id1;
    cout << "Enter the name of the Car: ";
    cin >> name1;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks1;

    Car car1(id1, name1, marks1);

    int id2, marks2;
    string name2;
    cout << "\nEnter the Id of the Car: ";
    cin >> id2;
    cout << "Enter the name of the Car: ";
    cin >> name2;
    cout << "Number of the Marks (1 - 10): ";
    cin >> marks2;

    Car car2(id2, name2, marks2);

    cout << endl;
    car1.displayCar();
    cout << endl;
    car2.displayCar();

    cout << "\nNo. of objects created in the class: " << Car::objectCount << endl;

    return 0;
}
