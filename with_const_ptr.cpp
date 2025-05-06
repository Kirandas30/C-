#include<iostream>
using namespace std;

int main(){
int a =100;
const int *p;//pointer to constant
p=&a;
cout<<"Value of *p is "<<*p;//100
//*p=200; reassigning value or valvue cannot be changed or invalid
//ncout<<"Value of *p is "<<*p; error
return 0;
}