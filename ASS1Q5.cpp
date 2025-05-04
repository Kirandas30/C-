#include <iostream>
using namespace std;

// Function to read the matrix elements
void readMatrix(int m, int n, int matrix[][10]) {
    // Reading the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display the matrix
void displayMatrix(int m, int n, int matrix[][10]) {
    // Displaying the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";  // Print the element
        }
        cout << endl;  // Move to the next line after printing one row
    }
}

int main() {
    int m, n;
    
    // Taking the dimensions of the matrix from the user
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;
    
    // Declare a matrix of size 10x10 (for demonstration purposes)
    int matrix[10][10];
    
    // Read the matrix elements
    readMatrix(m, n, matrix);
    
    // Display the matrix
    displayMatrix(m, n, matrix);
    
    return 0;
}
