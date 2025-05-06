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
    cout<<"Number: "<<number<<endl<<"cost = "<<cost<<endl;

}
int main(){
    item x , y;//creates a list of objects class item
    cout<<"object x"<<endl;
    x.getdata(100,234.78);//calling getdata function
    x.putdata();
    cout<<"object y"<<endl;
    y.getdata(100,234.78);//calling getdata function
    y.putdata();
    
    return 0;  
}