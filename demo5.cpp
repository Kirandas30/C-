#include <iostream>
using namespace std;
int m =10;
int main(){
int *a = new int;//or int(100)
float *b = new float ; // or float(20.34)
*a = 100;
*b = 20.34;
cout<<*a<<endl;
cout<<*b<<endl;

delete a;
delete b;

return 0;



}