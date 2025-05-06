#include <iostream>
using namespace std;
class M{
    int x, y;
    public:
    void set_xy(int a, int b){
        x = a;
        y = b;
    }
    friend int sum(M  obj);

};
int sum(M obj){
    int M::*px=&M::x;
    int M::*py=&M::y;

    M *pm=&obj;
    int result = obj.*px+pm->*py;//dereferencing operator used
    return result;

}
int main(){
    M n;
    void (M::*pf)(int,int)=&M::set_xy;
    (n.*pf)(10,20);
    cout<<"Sum = "<<sum(n)<<endl;


    M *op=&n;
    (op->*pf)(30,40);
    cout<<"Sum= "<<sum(n);
    return 0;
}