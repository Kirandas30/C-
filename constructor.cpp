#include<iostream>
using namespace std;

class integer{
    int m , n;
    public :
    integer(int , int );//constructor is declared 
    void display(){
        cout<<"m="<<m<<endl<<"n= "<<n<<endl; 
    }
};
 integer::integer(int x, int y){
    m=x;
    n=y;
 }
 int main(){
    integer int1(100,200);// constructor called implicitly
    integer int2=integer(125,654);//constructor called explicitly
    cout<<"for object 1 "<<endl;
    int1.display();
    cout<<"for object 2 "<<endl;
    int2.display();
    return 0;
 }
