/*write a c++ program to swap the two numbers by call by reference using inheritance
(Single,Multiple,Hierarchial,Multilevel and Hybrid Inheritance)*/

#include <iostream>
using namespace std;

// Base class
class SwapBase {
public:
    // Method to swap two numbers using call by reference
    void swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};

// Single Inheritance
class SingleInheritance : public SwapBase {
public:
    void displaySingle() {
        cout << "This is Single Inheritance." << endl;
    }
};

// Multiple Inheritance
class MultipleInheritance : public SwapBase {
public:
    void displayMultiple() {
        cout << "This is Multiple Inheritance." << endl;
    }
};

// Hierarchical Inheritance
class HierarchicalInheritance : public SwapBase {
public:
    void displayHierarchical() {
        cout << "This is Hierarchical Inheritance." << endl;
    }
};

// Multilevel Inheritance
class MultilevelInheritance : public SingleInheritance {
public:
    void displayMultilevel() {
        cout << "This is Multilevel Inheritance." << endl;
    }
};

// Hybrid Inheritance (Single Inheritance + Multiple Inheritance)
class HybridInheritance : public SingleInheritance, public MultipleInheritance {
public:
    void displayHybrid() {
        cout << "This is Hybrid Inheritance." << endl;
    }
};

int main() {
    int num1, num2;

    // Take input from the user
    cout << "Enter two numbers to swap: ";
    cin >> num1 >> num2;

    // Single Inheritance Example
    SingleInheritance singleObj;
    cout << "Before swapping (Single Inheritance): " << num1 << " " << num2 << endl;
    singleObj.swap(num1, num2);
    cout << "After swapping (Single Inheritance): " << num1 << " " << num2 << endl;
    singleObj.displaySingle();

    // Multiple Inheritance Example
    MultipleInheritance multiObj;
    cout << "Before swapping (Multiple Inheritance): " << num1 << " " << num2 << endl;
    multiObj.swap(num1, num2);
    cout << "After swapping (Multiple Inheritance): " << num1 << " " << num2 << endl;
    multiObj.displayMultiple();

    // Hierarchical Inheritance Example
    HierarchicalInheritance hierObj;
    cout << "Before swapping (Hierarchical Inheritance): " << num1 << " " << num2 << endl;
    hierObj.swap(num1, num2);
    cout << "After swapping (Hierarchical Inheritance): " << num1 << " " << num2 << endl;
    hierObj.displayHierarchical();

    // Multilevel Inheritance Example
    MultilevelInheritance multiLevelObj;
    cout << "Before swapping (Multilevel Inheritance): " << num1 << " " << num2 << endl;
    multiLevelObj.swap(num1, num2);
    cout << "After swapping (Multilevel Inheritance): " << num1 << " " << num2 << endl;
    multiLevelObj.displayMultilevel();

    // Hybrid Inheritance Example
    HybridInheritance hybridObj;
    cout << "Before swapping (Hybrid Inheritance): " << num1 << " " << num2 << endl;
    hybridObj.swap(num1, num2);
    cout << "After swapping (Hybrid Inheritance): " << num1 << " " << num2 << endl;
    hybridObj.displayHybrid();

    return 0;
}

