#include<iostream>
using namespace std;

class A{
    public :
    void display(){
        cout<<"base class "<< endl;

    }
};
class B : public A{
    public :
    void display(){
        cout<<"derived class "<< endl;

    }
};
int main(){
    B obj;
    obj.display(); //calling the display( )  of derived class
     obj.A::display(); //calling the display( )  of bse class
    obj.A::display(); //calling the display( )  of derived class
    return 0;
}