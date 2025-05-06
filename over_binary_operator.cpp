#include<iostream>
using namespace std;

class item{
    int x;
    public:
    item(){}
    item(int a){
        x=a;
    }
    void display(){
        cout<<x<<endl;
    }
    item operator+(item obj);
};
item item::operator+(item obj){// operator function body

    item temp;  // have to make default constructor for this line
    temp.x = x+obj.x;   // here in rhs, x refers to obj1 and obj.x refers to obj2 for line 26
    return temp;
}
int main(){
    item obj1(100);
    obj1.display();
    item obj2 = item(200);
    obj2.display();
    item obj3;
    obj3 = obj1 + obj2; // calling the operator fnction 
    cout<<"After addition"<<endl;
    obj3.display();
    return 0;
}