#include<iostream>
using namespace std;
float value(float p , int n, float r=0.5);
void printline(char ch ='*', int len =10);
int main(){
    float amount;
    printline();
    amount = value(500.1,5);
    cout<<"\n amount= "<<amount<<endl;
    printline('=');
    return 0;
}
float value(float p , int n, float r){
    float sum = p+n+r;
    return sum;
}
void printline(char ch , int len ){
    for(int i=0;i<len;i++)
    cout<<ch;
}