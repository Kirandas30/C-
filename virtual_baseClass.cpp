#include<iostream>
using namespace std;
class student{
protected:
int roll_no;
public:
void get_no(int a){
    roll_no = a;
}
void put_no(){
    cout<<"Roll number ="<<roll_no<<endl;
}

};
class test: virtual public student{
    protected:
    float sub1, sub2;
    public:
    void get_marks(float x , float y){
        sub1 = x;
        sub2 = y;
    }
    void put_marks(){
        cout<<"Marks are "<< sub1 <<"and"<<sub2<<endl;
    }
};
class sports : public virtual student{
    protected:
    float score;
    public:
    void get_score(float x){
        score = x;
    }
    void put_score(){
        cout<<"Score in sports is "<<score<< endl;
    }
};
class result : public test, public sports{
    float total;
    public:
    void display(){
        total = sub1 + sub2 +score;
        cout<<"The total marks are "<<total<<endl;
    }
};

int main(){
    result student1;
    student1.get_no(123);
    student1.put_no();
    student1.get_marks(12.56,78.98);
    student1.put_marks();
    student1.get_score(45.78);
    student1.put_score();
    student1.display();
    
    
    
    
    
    //student1.roll_no();hgh
return 0;
}