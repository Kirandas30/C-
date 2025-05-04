#include <iostream>
using namespace std;
#include <cmath> // For pow() function, but we won't use it directly for demonstration


double power(double m, int n = 2) {
   
    return pow(m,n);
}

int main() {
    double m;
    int n;

    // Ask user for input
    cout << "Enter the base number (m): ";
    cin >> m;
   cout << "Enter the exponent (n, default is 2): ";
   cin >> n;

    // Calculate and display the result
    double result = power(m, n);
    cout << m << " raised to the power of " << n << " is: " << result << endl;
    result = power(m);
    cout << m << " raised to the power of 2(default value)  is: " << result << endl;
    
    return 0;
}
