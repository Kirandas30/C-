#include<iostream>
using namespace std;
class abc;
class xyz{
    int x;
    public:
    void setValue(int i){x=i;}
    friend void max(xyz,abc);
};
class abc{
    int a;
    public:
    void setValue(int i){a=i;}
    friend void max(xyz,abc);
};
void max(xyz obj1, abc obj2){
    if(obj1.x>obj2.a)
    cout<<"max is "<<obj1.x<<endl;
    else  
    cout<<"max is "<<obj2.a<<endl;
}
int main(){
    xyz obj1;
    abc obj2;
    obj1.setValue(100);
    obj2.setValue(200);
    max(obj1 , obj2);

    return 0;
}