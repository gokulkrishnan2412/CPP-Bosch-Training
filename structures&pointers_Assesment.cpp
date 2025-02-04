/*Structures and pointers:
1.Write c++ program for adding two complex numbers using structures.
Input:       complex number1: 2+3i
                 complex number2: 6+8i
Output:    8+11i */

#include <iostream>
using namespace std;

// Define a structure for Complex number
struct Complex {
    int real;
    int imag;
};

// Function to add two complex numbers using pointers
void addComplexNumbers(Complex* num1, Complex* num2, Complex* result) {
    result->real = num1->real + num2->real;  // Add real parts
    result->imag = num1->imag + num2->imag;  // Add imaginary parts
}

int main() {
    // Declare two complex numbers
    Complex num1, num2, result;

    // Input values for complex numbers
    cout << "Enter real and imaginary part for first complex number (a + bi):" << endl;
    cout << "Real part: ";
    cin >> num1.real;
    cout << "Imaginary part: ";
    cin >> num1.imag;

    cout << "Enter real and imaginary part for second complex number (a + bi):" << endl;
    cout << "Real part: ";
    cin >> num2.real;
    cout << "Imaginary part: ";
    cin >> num2.imag;

    // Add the two complex numbers using pointers
    addComplexNumbers(&num1, &num2, &result);

    // Output the result
    cout << "Result of addition: " << result.real << " + " << result.imag << "i" << endl;

    return 0;
}
