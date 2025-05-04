#include <iostream>
using namespace std;

// Function to read the matrix elements
void readMatrix(int n, int m, int matrix[10][10]) {  // Fixed size matrix (10x10)
    // Reading the matrix elements directly
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];  // Directly read the element at position (i, j)
        }
    }
}

// Function to display the matrix
void displayMatrix(int n, int m, int matrix[10][10]) {
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
    int n, m;
    
    // Taking the number of columns (n) from the user
    cout << "Enter the number of columns (n): ";
    cin >> n;
    
    // Ask for rows (m) or use default value
    cout << "Enter the number of rows (m) or press 0 to use default value (3): ";
    cin >> m;
    
    if (m == 0) {
        // If m is 0, we use the default value 3
        m = 3;
    }
    
    // Declare a matrix of size 10x10 (for demonstration purposes)
    int matrix[10][10];
    
    // Read the matrix elements
    readMatrix(n, m, matrix);
    
    // Display the matrix
    displayMatrix(n, m, matrix);
    
    return 0;
}
