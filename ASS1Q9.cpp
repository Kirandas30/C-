#include <iostream>
using namespace std;
#include <cmath> // For pow() function, but we won't use it directly for demonstration


double power(double m, int n = 2) {
   
    return pow(m,n);
}
int power(int m,int n =2){
    return pow(m,n);
}
int main() {
    double c;
    int a,b;

    // Ask user for input
    cout << "Enter the 1st value(a): ";
    cin >> a;
    cout << "Enter the 2nd value(b): ";
    cin >> b;
    cout << "Enter the 3rd value(c): ";
    cin >> c;
  

    // Calculate and display the result
    double result = power(a, b);
    cout << " The result is  : " << result << endl;//a value to the power b value
    result = power(c);
    cout <<  " The square  is: " << result << endl;// c value to the power default value(2)
    
    return 0;
}
