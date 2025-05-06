#include <iostream>
using namespace std;
class Vector {
    private:
        float *values;
        size_t size;
    
    public:
        // Constructor
        Vector(size_t n) : size(n) {
            values = new float[size]();
        }
    
        // Destructor
        Vector() {
            delete[] values;
        }
    
        // Modify a specific element
        void modifyElement(size_t index, float newValue) {
            if (index < size) {
                values[index] = newValue;
            } else {
                cout << "Index out of range!" << endl;
            }
        }
    
        // Add two vectors
        Vector add(const Vector &other) const {
            if (size != other.size) {
                cerr << "Vectors must be of the same size!" << endl;
                return *this;
            }
    
            Vector result(size);
            for (size_t i = 0; i < size; ++i) {
                result.values[i] = values[i] + other.values[i];
            }
            return result;
        }
    
        // Display the vector
        void display() const {
            cout << "(";
            for (size_t i = 0; i < size; ++i) {
                cout << values[i];
                if (i != size - 1) cout << ", ";
            }
            cout << ")" << endl;
        }
    };
    
    int main() {
        Vector vec1(3);
        vec1.modifyElement(0, 10);
        vec1.modifyElement(1, 20);
        vec1.modifyElement(2, 30);
        
        Vector vec2(3);
        vec2.modifyElement(0, 5);
        vec2.modifyElement(1, 15);
        vec2.modifyElement(2, 25);
        
        Vector result = vec1.add(vec2);
        result.display();
    
        return 0;
    }
    