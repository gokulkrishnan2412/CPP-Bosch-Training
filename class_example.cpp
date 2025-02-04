//Class Program
//What is class and why should we use class instead of structure
/*In C++ (and other object-oriented programming languages like Java), a class is a blueprint for creating objects. 
It defines properties (data members) and behaviors (member functions or methods) that the objects 
created from the class will have. A class can encapsulate both data and functions that operate on that data.*/
/*A class is a fundamental concept in Object-Oriented Programming (OOP). Using classes, you can model real-world
 entities in a program and make it easier to manage, maintain, and extend complex systems.*/

 #include <iostream>
using namespace std;

class Car {
private:
    // Private members (cannot be accessed directly outside the class)
    string model;
    int year;

public:
    // Constructor to initialize the car object
    Car(string m, int y) {
        model = m;
        year = y;
    }

    // Method to display car details
    void display() {
        cout << "Car Model: " << model << ", Year: " << year << endl;
    }

    // Method to set model
    void setModel(string m) {
        model = m;
    }

    // Method to get model
    string getModel() {
        return model;
    }
};

int main() {
    Car car1("Toyota", 2020);
    car1.display();

    car1.setModel("Honda");
    car1.display();

    return 0;
}
