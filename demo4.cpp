#include <iostream>
using namespace std;

int main() {
    int *a = new int;
    float *b = new float;

    *a = 100;
    *b = 20.34;

    cout << *a << endl;
    cout << *b << endl;

    delete a;
    delete b;

    a = new int;
    b = new float;

    *a = 1100;
    *b = 200.34;

    cout << *a << endl;
    cout << *b << endl;

    delete a;
    delete b;

    return 0;
}
