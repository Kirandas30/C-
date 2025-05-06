#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no ;
    public:
    void get_number(int a){
        roll_no = a; 
    }
    void put_number(){
        cout<<"Roll number : "<< roll_no<<endl;
    

    }
};
class test: public student{
    protected:
    float subject1 , subject2;
    public:
    void get_marks(float x , float y){
        subject1 = x;
        subject2 =y;
    }
    void put_marks(){
        cout<<"Marks in subject1 : "<<subject1<<endl<<"Marks in subject2"<<subject2;
    }
};
class result : public test{
    float total;
    public:
    void display(){
        total = subject1 + subject2;
        cout<<"Total marks are : "<<total<<endl;
    }
};
int main(){
    result s1;
    s1.get_number(111);
    s1.get_marks(34.78,56.78);
    s1.put_number();
    s1.put_marks();
    s1.display();
    return 0;

}