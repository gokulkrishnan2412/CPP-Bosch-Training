/*Write a c++ program to implement armstrong 
number using operator overloading.(Arithmetic operators)*/

#include <iostream>
#include <cmath>
using namespace std;

class Armstrong {
private:
    int number;

public:
    // Constructor to initialize the number
    Armstrong(int num) {
        number = num;
    }

    // Operator Overloading for addition (+) to calculate sum of digits raised to the power of number of digits
    int operator+(Armstrong obj) {
        int sum = 0;
        int temp = obj.number;
        int numDigits = 0;

        // Find the number of digits
        while (temp != 0) {
            temp /= 10;
            numDigits++;
        }

        temp = obj.number;

        // Add the digits raised to the power of numDigits
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, numDigits);
            temp /= 10;
        }
        return sum;
    }

    // Function to check if the number is an Armstrong number
    bool isArmstrong() {
        int sum = *this + *this;  // Use overloaded + operator to calculate sum of digits raised to the power
        return sum == number; // If sum equals the original number, it is an Armstrong number
    }
};

int main() {
    int num;

    // Take input from the user
    cout << "Enter a number to check if it's an Armstrong number: ";
    cin >> num;

    Armstrong obj(num);

    // Check if the number is Armstrong
    if (obj.isArmstrong()) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
