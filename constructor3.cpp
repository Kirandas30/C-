#include<iostream>
using namespace std;

class integer{
    int m , n;
    public :
    integer( ){//constructor is declared and defined 
       // m=x;
       // n=y;
     }
     void input(){
        m=100;
        n=200;
     }
    void display(){
        cout<<"m="<<m<<endl<<"n= "<<n<<endl; 
    }
};
 //integer :: integer(){}  //constructor is declared and defined outside the class
 int main(){
    integer obj;
    obj.input();
    obj.display();
    return 0;
 }
