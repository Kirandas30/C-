#include <iostream>
using namespace std;


class Vector {
private:
    float *values;
    size_t size;

public:
    // Constructor to create a vector
    Vector(size_t n) : size(n) {
        values = new float[size]();
    }

    // Destructor to free memory
    Vector() {
        delete[] values;
    }

    // Modify a specific element in the vector
    void modifyElement(size_t index, float newValue) {
        if (index < size) {
            values[index] = newValue;
        } else {
           cout << "Index out of range!" <<endl;
        }
    }

    // Multiply all elements by a scalar value
    void multiplyByScalar(float scalar) {
        for (size_t i = 0; i < size; ++i) {
            values[i] *= scalar;
        }
    }

    // Display the vector
    void display() const {
       cout << "(";
        for (size_t i = 0; i < size; ++i) {
           cout << values[i];
            if (i != size - 1)cout << ", ";
        }
       cout << ")" <<endl;
    }
};

int main() {
    Vector vec(3);
    vec.modifyElement(0, 10);
    vec.modifyElement(1, 20);
    vec.modifyElement(2, 30);
    vec.display();

    vec.multiplyByScalar(2);
    vec.display();

    return 0;
}
