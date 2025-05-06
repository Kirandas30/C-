#include <iostream>
using namespace std;
int m =10;//m is a global variable
int main(){
    int m =20;//m is redeclared , local to main
    {
        int k = m;
        int m = 30; // m is declared again , local to inner block
        cout<<"k = "<< k<<"\n";//20
         cout<<"m = "<< m<<"\n";//30
          cout<<"::m = "<< ::m<<"\n";//10  , value assigned from global variable

    }
     cout<<"m = "<< m<<"\n";//20
      cout<<"::m= "<< ::m<<"\n";//10 , value assigned from global variable

      return 0;
}