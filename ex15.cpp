#include <iostream>
using namespace std;
class B;
class A
{
    int value1;

public:
    void setvalue(int a)
    {
        value1 = a;
    }
    void display() { cout << "Value1: " << value1 << endl; }
    friend void swap(A &, B &);
};
class B
{
    int value2;

public:
    void setvalue(int i)
    {
        value2 = i;
    }
    void display() { cout << "Value2: " << value2 << endl; }
    friend void swap(A &, B &);
};
void swap(A &obj1, B &obj2)
{
    int t;
    t = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = t;
}
int main()
{
    A obj1;
    B obj2;
    obj1.setvalue(10);
    obj2.setvalue(20);
    cout << "Before swapping: \n";
    obj1.display();
    obj2.display();
    swap(obj1, obj2);
    cout << "After swapping: \n";
    obj1.display();
    obj2.display();
    return 0;
}