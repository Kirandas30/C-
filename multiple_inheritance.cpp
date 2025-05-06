#include<iostream>
using namespace std;

class M{
    protected:
    int m ;
    public:
    void get_m(int a){
        m =a;
    }


};
class N{
    protected:
    int n;
    public:
    void get_n(int y){
        n =y;
    }
};
class P : public M , public N{
    public :
    void display(){
        cout<<"m"<<m<<endl<<"n="<<n;
    }
} ;
int main(){
    P obj;
    obj.get_m(5);
    obj.get_n(4);
    obj.display();
    return 0;

}