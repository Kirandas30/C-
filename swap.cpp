#include<iostream>
using namespace std;
void swapint(int  &a, int &b){
int temp = a;
a=b;
b=temp;
}
int main(){
    int x,y;
    cout<<"Enter first number";
    cin>>x;
    cout<<"Enter second number";
    cin>>y;
    
    return 0;
}