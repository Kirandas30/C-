#include <iostream>
using namespace std;


int* createVector(int M) {
    int* vector = new int[M]; // Allocate memory for M integers

   cout << "Enter " << M << " elements: ";
    for (int i = 0; i < M; i++) {
       cin >> vector[i]; // Read elements from the user
    }

    return vector;
}

int main() {
    int M;
   cout << "Enter the size of the vector: ";
   cin >> M;

    int* vec = createVector(M);

   cout << "Vector elements: ";
    for (int i = 0; i < M; i++) {
       cout << vec[i] << " ";
    }
   cout <<   endl;

    delete[] vec; // Free allocated memory
    return 0;
}