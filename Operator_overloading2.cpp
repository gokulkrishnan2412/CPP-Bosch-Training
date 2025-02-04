/*Write a c++ program to perform set and reset the bit using 
operator overloading(Bitwise operators)*/

#include <iostream>
using namespace std;

class BitManipulator {
private:
    int number;

public:
    // Constructor to initialize the number
    BitManipulator(int num) {
        number = num;
    }

    // Set the bit at a given position (index)
    void operator|=(int pos) {
        number |= (1 << pos);  // Set the bit at the 'pos' position to 1
    }

    // Reset the bit at a given position (index)
    void operator&=(int pos) {
        number &= ~(1 << pos);  // Reset the bit at the 'pos' position to 0
    }

    // Display the current number
    void display() {
        cout << "Current number in binary: ";
        for (int i = 31; i >= 0; i--) {
            cout << ((number >> i) & 1); // Print each bit
        }
        cout << endl;
    }

    // Function to get the number (getter)
    int getNumber() {
        return number;
    }
};

int main() {
    int num, pos;

    // Get the initial number from the user
    cout << "Enter a number: ";
    cin >> num;

    BitManipulator bm(num);  // Create an object with the input number

    // Display the initial number in binary format
    bm.display();

    // Set a bit at a given position
    cout << "Enter the position (0-31) to set the bit: ";
    cin >> pos;
    bm |= pos;  // Set the bit at position 'pos'
    cout << "After setting the bit at position " << pos << ": ";
    bm.display();

    // Reset a bit at a given position
    cout << "Enter the position (0-31) to reset the bit: ";
    cin >> pos;
    bm &= pos;  // Reset the bit at position 'pos'
    cout << "After resetting the bit at position " << pos << ": ";
    bm.display();

    // Final value of the number
    cout << "Final number: " << bm.getNumber() << endl;

    return 0;
}
