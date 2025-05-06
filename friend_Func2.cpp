//here the add() is member to class A and friend to class B
#include<iostream>
using namespace std;
class B;//forward declaration
class A{
    public:
    int add(B);
};
class B{
    int m =10;
    friend int A::add(B obj2);//friend function
};
int A::add(B obj2){
    obj2.m= obj2.m+25;
    return obj2.m;
}
int main(){
    A obj1;
    B obj2;
    cout<<"The output is"<<obj1.add(obj2);
return 0;
}