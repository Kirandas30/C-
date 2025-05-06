#include<iostream>
using namespace std;
class set{
    int num1, num2;//private by default
    
    public:
    void input(void);//function prototype declaration
    void display(void);
    int largest();
};
void set :: input(void)
{
    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
}
int set :: largest(void){
    if(num1 > num2)
    return num1;
    else 
    return num2;
}
void set :: display(void){
    cout << "The largest number is: " << largest() << endl;
}
int main(){
    set obj;
    obj.input();
    obj.display();

    return 0;
}