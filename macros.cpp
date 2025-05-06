#include<iostream>
using namespace std;
#define largest(x,y,z)((x<y&&x<z)?x:(y<z)?y:z)

int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Largest number is: "<<largest(a,b,c);
    return 0;
}