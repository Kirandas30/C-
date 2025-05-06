#include<iostream>
using namespace std;
int& display(int& ref)//int ref=a; during function call
{
    ref++;
    return ref;
}
int main(){
    int a = 10;
    cout<<display(a)<<endl;
    cout<<a<<endl;
    int b = display(a);
    cout<<b<<endl;
    int& c=b;
    cout<<c<<endl;
    c++;
    cout<<c<<endl;
    cout<<b<<endl;
    cout<<a<<endl;
    return 0;
}