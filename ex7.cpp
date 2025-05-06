#include <iostream>
using namespace std;

const int size = 5;  

class students {
    int a[size];  

public:
    void getdata() {
        for(int i = 0; i < size; i++) {
            cout << "Enter the marks of student " << (i+1) << ": ";
            cin >> a[i];
        }
    }

    void add() {
        int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += a[i];
        }
        cout << "Total marks: " << sum << endl;
    }
};

int main() {
    students s1;
    s1.getdata();
    s1.add();
    return 0;
}
