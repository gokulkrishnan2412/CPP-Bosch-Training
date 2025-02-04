/*Write c++ program to calculate Simple interest and Total amount by using class and object 
method(Note:SI=PNR/100)
Implement above program by Class and Object method,pointer to object method and 
(this->)pointer method*/

#include <iostream>
using namespace std;

class InterestCalculator {
private:
    float principal;
    float rate;
    float time;

public:
    // Method to set values for principal, rate, and time
    void setValues(float p, float r, float t) {
        principal = p;
        rate = r;
        time = t;
    }

    // Method to calculate Simple Interest and Total Amount using Class and Object
    void calculateSI_ClassObjectMethod() {
        float SI = (principal * rate * time) / 100;
        float totalAmount = principal + SI;
        cout << "Using Class and Object Method:" << endl;
        cout << "Simple Interest: " << SI << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }

    // Method to calculate Simple Interest and Total Amount using Pointer to Object
    void calculateSI_PointerMethod() {
        float SI = (this->principal * this->rate * this->time) / 100;  // using pointer-to-object
        float totalAmount = this->principal + SI;
        cout << "Using Pointer to Object Method:" << endl;
        cout << "Simple Interest: " << SI << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }

    // Method to calculate Simple Interest and Total Amount using this-> pointer method
    void calculateSI_ThisPointerMethod() {
        float SI = (this->principal * this->rate * this->time) / 100;  // using this-> pointer
        float totalAmount = this->principal + SI;
        cout << "Using this-> Pointer Method:" << endl;
        cout << "Simple Interest: " << SI << endl;
        cout << "Total Amount: " << totalAmount << endl;
    }
};

int main() {
    // Create an object of InterestCalculator class
    InterestCalculator ic;

    // Input values for principal, rate, and time
    float principal, rate, time;
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Set values to the object using the setter method
    ic.setValues(principal, rate, time);

    // Call methods for calculating SI and Total amount using different approaches
    ic.calculateSI_ClassObjectMethod();         // Class and Object Method
    ic.calculateSI_PointerMethod();             // Pointer to Object Method
    ic.calculateSI_ThisPointerMethod();         // this-> Pointer Method

    return 0;
}
