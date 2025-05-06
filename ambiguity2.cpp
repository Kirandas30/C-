#include<iostream>
using namespace std;

class M{
    public :
    void display(){
        cout<<" first base class "<< endl;

    }
};
class N{
    public :
    void display(){
        cout<<"second base class "<< endl; 

    }
};
class P: public M, public N{
public:
void show(){
    M::display();
}
};
int main(){
    P obj;
    obj.show();
    return 0;
}