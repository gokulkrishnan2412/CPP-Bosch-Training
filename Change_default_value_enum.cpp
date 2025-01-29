//Write a C++ program to Change Default Value of Enum
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
