#include<iostream>
using namespace std;

class B{
    int a;
    public :
    int b;
    void get(){
        a=5;
        b=10;

    }
};
class D: B // private derivation of class B to the derived class D
{
    int c;
    public:
    void mul(){
        c= b*100;
    }
    void display(){
        cout<<"b="<<b<<endl<<"C="<<c;

    }
};
    int main(){
        D obj;
        obj.get();//error :  get() is a public member of base class became private member of derived class
        obj.mul();
        obj.display();
        obj.b=20;// error: b is a public member of base class  became private member of derived class
        obj.mul();
        obj.display();
        return 0;
    }
//  here , error as they are private members getting inherited publicly

