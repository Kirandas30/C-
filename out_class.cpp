#include<iostream>
using namespace std;
class item{
    int number;//private by default
    float cost;//private by default
    public:
    void getdata(int a,float b);//function prototype declaration
    void putdata(void);
};
void item :: getdata(int a, float b){
    number = a;
    cost = b;
}
void item :: putdata(void){
    cout<<"Number: "<<number<<endl<<"cost = "<<cost;

}
int main(){
    item obj;//obj is an object of class item
    obj.getdata(100,234.78);//calling getdata function
    obj.putdata();
    
    return 0;  
}