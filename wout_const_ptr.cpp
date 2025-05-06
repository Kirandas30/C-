#include<iostream>
using namespace std;

int main(){
int a =100;
int *p;
p=&a;
cout<<"Value of *p is "<<*p;//100
*p=200;//reassigning value or valvue can be changed
cout<<"Value of *p is "<<*p;//200
return 0;
}