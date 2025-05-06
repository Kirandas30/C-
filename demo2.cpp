
#include  <iostream>
using namespace std;

class person {
    char name[100];
    int age;
    public :
  void getdata();
  void display();
};
void person :: getdata(){
     cout << "enter name and age : " ;
     cin>>name>> age;
     
}
void person :: display(){
    cout << "name is " << name <<endl;
    cout<< " age is " << age ;
};
int main(){
    person p1;
    p1.getdata();
    p1.display();
}