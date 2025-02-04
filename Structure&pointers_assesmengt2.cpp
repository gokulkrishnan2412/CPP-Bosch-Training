/*Write c++ program to calculate the Total marks and percentage of 2 students using
 structures and pointers
(Note:Get the person1 name ,person2 name,Department,Mark1,Mark2,Mark3,Mark4,Mark5 from the user)*/

#include <iostream>
#include <string>
using namespace std;

// Define a structure for Student information
struct Student {
    string name;
    string department;
    float marks[5];  // Array to store marks for 5 subjects
    float totalMarks;
    float percentage;
    
    // Function to calculate total marks and percentage
    void calculate() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];  // Add marks of all subjects
        }
        percentage = (totalMarks / 500) * 100;  // Calculate percentage based on total marks out of 500
    }
};

int main() {
    // Create two Student objects
    Student student1, student2;

    // Get input for student 1
    cout << "Enter details for Student 1:" << endl;
    cout << "Name: ";
    getline(cin, student1.name);
    cout << "Department: ";
    getline(cin, student1.department);
    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> student1.marks[i];
    }
    
    cin.ignore();  // To consume the newline character left by cin

    // Get input for student 2
    cout << "\nEnter details for Student 2:" << endl;
    cout << "Name: ";
    getline(cin, student2.name);
    cout << "Department: ";
    getline(cin, student2.department);
    cout << "Enter marks for 5 subjects:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> student2.marks[i];
    }

    // Calculate total marks and percentage for both students using pointers
    Student* ptr1 = &student1;
    Student* ptr2 = &student2;

    ptr1->calculate();
    ptr2->calculate();

    // Display results for student 1
    cout << "\nStudent 1: " << ptr1->name << endl;
    cout << "Department: " << ptr1->department << endl;
    cout << "Total Marks: " << ptr1->totalMarks << "/500" << endl;
    cout << "Percentage: " << ptr1->percentage << "%" << endl;

    // Display results for student 2
    cout << "\nStudent 2: " << ptr2->name << endl;
    cout << "Department: " << ptr2->department << endl;
    cout << "Total Marks: " << ptr2->totalMarks << "/500" << endl;
    cout << "Percentage: " << ptr2->percentage << "%" << endl;

    return 0;
}
