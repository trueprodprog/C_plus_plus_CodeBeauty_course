#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "rows, cols:";
    cin >> rows >> cols;
    //loop to create array of pointers
    int** table = new int*[rows]; //table - pointer to a pointer , create array of pointers
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    // loop to populate the cells sequentially ---
    int counter = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            table[i][j] = counter;
            counter++; // Increase the number for the next cell
        }
    }

    table[1][2] = 88; //1st row, 2nd column from o to 3

    // loop to print the table
    cout << "\nHere is the table:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << table[i][j] << "\t"; // \t adds a tab space so it looks like a clean grid
        }
        cout << endl; // Drops to the next line after finishing a row
    }
    //clean-up the memory
    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }

    delete[] table;
    table = NULL;
}