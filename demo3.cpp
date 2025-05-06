#include<iostream>

using namespace std;
enum Shape{circle,rectangle,triangle};
int main(){
    cout<<"Shape code of circle is  "<<circle<<"\n";
    cout<<"Shape code of rectangle is  "<<rectangle<<"\n";
    cout<<"Shape code of triangle is  "<<triangle<<"\n";
    
    int a;
    cout<<"Enter your choice of shpae code";
    cin>>a;
    switch(a){
        case circle:
        cout<<"Shape code is circle";
        break;
        case rectangle:
        cout<<"Shape code is rectangle";
        break;
        case triangle:
        cout<<"Shape code is triangle";
        break;
        default:
        cout<<"wrong choice";

        break;
    }
    return 0;
    }
