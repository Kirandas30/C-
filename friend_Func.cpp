#include<iostream>
using namespace std;
class sample{
    int a, b;
    public:
    void setValue(){
        a = 25;
        b = 30;
    }
    friend float mean(sample s);//friend function declaration and sample s is object
};
float mean(sample s){
    return float(s.a+s.b)/2.0;//typecasting

}
int main(){
    sample s1;
    s1.setValue();
    cout<<"Mean value = "<<mean(s1)<<endl;
    return 0;
}