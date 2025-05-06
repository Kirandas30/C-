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
   friend item operator+(item obj1 , item obj2);
};
item operator+(item obj1, item obj2){// operator function body

    item temp;  // have to make default constructor for this line
    temp.x = obj1.x+ obj2.x;   // here in rhs, x refers to obj1 and obj.x refers to obj2 for line 26
    return temp;
}
int main(){
    item obj1(100);
    obj1.display();
    item obj2 = item(200);
    obj2.display();
    item obj3;
    //obj3 = obj1 + obj2; // calling the operator fnction 
    obj3 = operator+(obj1 , obj2); // calling the operator fnction
    cout<<"After addition"<<endl;
    obj3.display();
    return 0;
}