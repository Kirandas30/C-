#include<iostream>
using namespace std;
class space{
    int x, y, z;
    public:
    void getdata(int a, int b, int c);
    void display();
    void operator-();// operator function
};
void space:: getdata(int a, int b, int c){
    x = a;
    y = b;
 z = c;
 }
 void space:: display(){
    cout<<"x = "<<x<<endl<<" y = "<<y<<endl<<" z = "<<z<<endl;
 }
 void space::operator-() {
    x = -x;
    y = -y;
    z = -z;
}
int main(){
    space s1;
    s1.getdata(10, -20, 30);
    cout<<"For s1 object : "<<endl;
    s1.display();
    -s1;   //calling the operator function
    cout<<"After ca  lling the operator function :"<<endl;
    s1.display();
return 0;
}