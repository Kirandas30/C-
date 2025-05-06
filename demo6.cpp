#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the  total no. of students ";
cin>>n;
float *p = new float[n];/*Dynamically allocates an array of floats of size n. p is a pointer to the first element of this array.
new float[n] = allocates an array of floats.
*/
cout<<"Enter the marks of students "<<endl;
for(int i=0;i<n;i++){
    cout<<"student"<<i+1;
    cin>>*(p+i);//*(p + i) is just another way to write p[i].p + i moves the pointer i positions forward — it points to the i-th element of the array.

                 // *(p + i) accesses the value at that memory location.
}
cout<<"Display  the marks of students "<<endl;
for(int i=0;i<n;i++){
    cout<<"Student"<<i+1<<*(p+i)<<endl;
}
delete []p;//delete[] p = releases the whole array (very important to prevent memory leaks).
return 0;



}