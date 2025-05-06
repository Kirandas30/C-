#include <iostream>
#include <cmath>

using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int n = 0) : value(n) {}

    // Set the number
    void setNumber(int n) {
        value = n;
    }

    // Get the number
    int getNumber() const {
        return value;
    }

    // Print the number
    void printNumber() const {
        cout << "Number: " << value << endl;
    }

    // Check if the number is negative
    bool isNegative() const {
        return value < 0;
    }

    // Check if divisible by n
    bool isDivisibleBy(int n) const {
        return (n != 0) && (value % n == 0);
    }

    // Get absolute value
    int absoluteValue() const {
        return abs(value);
    }
};

int main() {
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    Number num(userInput);

    num.printNumber();
    cout << "Is Negative? " << (num.isNegative() ? "Yes" : "No") << endl;
    cout << "Is Divisible by 5? " << (num.isDivisibleBy(5) ? "Yes" : "No") << endl;
    cout << "Absolute Value: " << num.absoluteValue() << endl;

    return 0;
}
