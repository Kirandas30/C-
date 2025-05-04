#include <iostream>
using namespace std;

int main(){
int m,n;
cout<<"Enter the rows and colums of the matrix :  ";
cin>>m>>n;
float **p = new float*[m];//p as a pointer to an array where each element is a pointer to a row of floats.

 
for(int i=0;i<m;i++){
    p[i] = new float[n];
}
cout<<"Enter the elements of the matrix :  "<< "\n";
int j;
float element;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>element;
        p[i][j] = element;
}
}
cout<<"Display the elements of matrix  : "<< "\n";
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<p[i][j]<<"  ";
}
cout<<"\n";
}
for(int i=0;i<m;i++){
    delete[] p[i];
}
delete[] p;
return 0;
}