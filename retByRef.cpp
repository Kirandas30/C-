#include<iostream>
using namespace std;
int n;
int& display()//int ref=a; during function call
{
    
    return n;
}
int main(){
    display() = 10;//1st refernce variable
    cout<<n;
    
    return 0;
}