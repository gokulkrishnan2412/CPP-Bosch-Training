/*Write c++ program to calculate volume of cuboid by using Constructor and Destructor
(Note:Volume of cuboid=length*breadth*height)
Implement the above program by using default constructor,copy constructor,
parameterised constructor and overloading constructor.*/

#include <iostream>
using namespace std;

class Cuboid {
private:
    float length;
    float breadth;
    float height;

public:
    // Default Constructor
    Cuboid() {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
        cout << "Default Constructor: Cuboid created with default dimensions (0, 0, 0)" << endl;
    }

    // Copy Constructor
    Cuboid(const Cuboid &c) {
        length = c.length;
        breadth = c.breadth;
        height = c.height;
        cout << "Copy Constructor: Cuboid created as a copy of another cuboid" << endl;
    }

    // Parameterized Constructor
    Cuboid(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
        cout << "Parameterized Constructor: Cuboid created with dimensions (" 
             << length << ", " << breadth << ", " << height << ")" << endl;
    }

    // Overloaded Constructor (with default parameters)
    Cuboid(float l) {
        length = l;
        breadth = 2 * l;  // Default breadth as twice the length
        height = 3 * l;   // Default height as three times the length
        cout << "Overloaded Constructor: Cuboid created with dimensions (" 
             << length << ", " << breadth << ", " << height << ")" << endl;
    }

    // Destructor
    ~Cuboid() {
        cout << "Destructor: Cuboid with dimensions (" 
             << length << ", " << breadth << ", " << height 
             << ") is being destroyed." << endl;
    }

    // Method to calculate and display the volume of the cuboid
    void calculateVolume() {
        float volume = length * breadth * height;
        cout << "Volume of Cuboid = " << volume << endl;
    }
};

int main() {
    // Creating a Cuboid object using Default Constructor
    Cuboid c1;
    c1.calculateVolume();

    // Creating a Cuboid object using Parameterized Constructor
    Cuboid c2(5.0, 3.0, 2.0);
    c2.calculateVolume();

    // Creating a Cuboid object using Overloaded Constructor
    Cuboid c3(4.0);  // Default breadth = 8.0 and height = 12.0
    c3.calculateVolume();

    // Creating a Cuboid object using Copy Constructor
    Cuboid c4 = c2;  // Copy c2 to c4
    c4.calculateVolume();

    // Objects go out of scope, and destructors will be called automatically
    return 0;
}
