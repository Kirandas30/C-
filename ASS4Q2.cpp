#include <iostream>
using namespace std;
class space
{
    int x;
    public:
    space(){}
    space(int a)
    {
        x=a;
    }
    void display()
    {
        cout<<"The value of x is "<<x<<endl;
    }
    void operator++();
};
void space::operator++()
{
    x=x+1;
}
int main()
{
    space s1(8);
    cout<<"For s1 object: "<<endl;
    s1.display();
    ++s1; //calling the operator fn
    cout<<"After calling operator fn"<<endl;
    s1.display();
    return 0;
}