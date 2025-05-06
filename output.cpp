#include <iostream>
using namespace std;

int main(){
    int a = 100;
    cout<<"a = "<< a<< "\n";//100
    int &ref = a;
     cout<<"ref = "<< ref<< "\n";//100
    ref = 200;
     cout<<"a = "<< a<< "\n";//200
    a = 300;
     cout<<"ref = "<< ref<< "\n";//300
    return 0;
}