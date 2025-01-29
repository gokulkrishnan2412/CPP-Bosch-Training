//Write a C++ Dynamically allocate memory for a 2D matrix using pointers and Deallocate the memory

#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Ask the user for the number of rows and columns for the 2D matrix
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // Dynamically allocate memory for the 2D matrix
    int** matrix = new int*[rows];  // Allocate an array of row pointers

    // Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];  // Allocate memory for each column in a row
    }

    // Initialize the matrix with some values (e.g., row * column value)
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + 1) * (j + 1);  // Example initialization
        }
    }

    // Print the matrix
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the 2D matrix
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];  // Free each row
    }
    delete[] matrix;  // Free the array of row pointers

    return 0;
}
