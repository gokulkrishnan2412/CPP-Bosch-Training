/*Write a c++ program to perform different operations(Add,subtract,Multiply,Divide) using 
Functions overloading 
(Note:Add->void add(int,int),Subtract->void sub(double,double),Multiply->void 
mul(int,int,int) and Divide->void div(int,int).use this reference.)*/

#include <iostream>
using namespace std;

class Calculator {
public:
    // Add function: Takes two integers
    void add(int a, int b) {
        cout << "Addition (int, int): " << a + b << endl;
    }

    // Subtract function: Takes two doubles
    void sub(double a, double b) {
        cout << "Subtraction (double, double): " << a - b << endl;
    }

    // Multiply function: Takes three integers
    void mul(int a, int b, int c) {
        cout << "Multiplication (int, int, int): " << a * b * c << endl;
    }

    // Divide function: Takes two integers
    void div(int a, int b) {
        if (b != 0) {
            cout << "Division (int, int): " << a / b << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator calc;

    // Call the overloaded functions using the reference of the object
    calc.add(10, 20);         // Add two integers
    calc.sub(15.5, 10.5);     // Subtract two doubles
    calc.mul(2, 3, 4);        // Multiply three integers
    calc.div(20, 4);          // Divide two integers

    return 0;
}
