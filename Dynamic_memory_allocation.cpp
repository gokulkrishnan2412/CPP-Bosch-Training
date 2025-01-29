//Write a C++ program to dynamically allocate an array of integers and strings and initialize its elements

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an array of 5 integers
    int *intArray = new int[5];

    // Initialize the array with values
    for (int i = 0; i < 5; ++i) {
        intArray[i] = (i + 1) * 10;  // Assigning values: 10, 20, 30, 40, 50
    }

    // Print the values of the integer array
    cout << "Integer Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    // Dynamically allocate an array of 3 strings
    string *strArray = new string[3];

    // Initialize the array with string values
    strArray[0] = "Hello";
    strArray[1] = "C++";
    strArray[2] = "World";

    // Print the values of the string array
    cout << "String Array: ";
    for (int i = 0; i < 3; ++i) {
        cout << strArray[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] intArray;   // Free the memory allocated for the integer array
    delete[] strArray;   // Free the memory allocated for the string array

    return 0;
}
