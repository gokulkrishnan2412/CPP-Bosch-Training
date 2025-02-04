//Write a C++ program to Change Default Value of Enum
//Why enum and what is enum?
/*An enum (short for enumeration) is a user-defined data type in C++ that consists of a set of named integer constants. It allows you to define variables that can
 hold a set of predefined values, making the code more readable, maintainable, and type-safe.
 In simpler terms, an enum allows you to give more meaningful names to numeric values, making it easier to understand what those values represent.*/
/*In C++, the values assigned to enum members are typically set by default to incrementing integers starting 
from 0. However, you can explicitly assign values to each member of the enum, including the first one, if you 
want to change the default behavior.*/

#include <iostream>
using namespace std;

enum Color {
    Red = 10,      // Red is now explicitly set to 10
    Green = 20,    // Green is set to 20
    Blue = 30      // Blue is set to 30
};

int main() {
    Color myColor = Green;

    cout << "The value of myColor is: " << myColor << endl;  // Prints 20

    return 0;
}
