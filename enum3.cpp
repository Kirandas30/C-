#include<iostream>
using namespace std;

enum shape{circle,rectangle,triangle};
int main(){
int a;
cout<<"Enter the shape you want to draw: \n";
cin>>a;
switch(a){
    case circle: 
    cout<<"Shape is circle "<<endl;
    break;
    case rectangle: 
    cout<<"Shape is rectangle "<<endl;
    break;
    case triangle: 
    cout<<"Shape is triangle "<<endl;
    break;
    default: 
    cout<<"wrong choice "<<endl;
    break;
}
    return 0;
    
    
}


