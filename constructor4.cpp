#include<iostream>
using namespace std;

class complex{
    float real, img;
    public:
    complex(float x, float y){
        real = x;
        img = y;
    }
    complex(float x){
        real = x;
        img =x;
    }
    complex(){}
    friend complex sum(complex , complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2){
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}
void show(complex c){
    cout<<c.real<<"+ j"<<c.img<<endl;
}
int main(){
    complex A(2.7, 3.3);
    complex B(4.5,5.6);
    complex C;
    C= sum(A,B);
    cout<<"A = ";
    show(A);
    cout<<"B = ";
    show(B);
    cout<<"C = ";
    show(C);
    return 0;
}