#include<iostream>
using namespace std;
class B;//forward declaration
class A{
    public:
    int add(B);
    int mul(B);
};
class B{
    int m =10;
    friend class A;//friend class
};
int A::add(B obj2){
    obj2.m= obj2.m+25;
    return obj2.m;
}
int A::mul(B obj2){
    obj2.m= obj2.m*2;
    return obj2.m;
}
int main(){           
    A obj1;
    B obj2;
    cout<<"The add output is"<<obj1.add(obj2);
    cout<<"The mul output is"<<obj1.mul(obj2);
return 0;
}