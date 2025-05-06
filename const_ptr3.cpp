#include<iostream>
using namespace std;

int main(){
    int a = 100,b=200;
   const int *const p =&a ;
    
    cout << "value of *p is " <<*p<<endl;
    *p = 150;
    *p=&b;//reassigning value or valvue can be changed
    cout<<"Value of *p is "<<*p;//200
return 0;
}

/*Declaration	Can Change Value	Can Change Address
int *p	           ✅ Yes	                ✅ Yes
const int *p	     ❌ No	                ✅ Yes
int *const p	    ✅ Yes	                 ❌ No
const int *const p	❌ No	                 ❌ No*/