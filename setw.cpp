#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int basic = 950;
    int allowance = 76;
    int total = basic + allowance;
    cout << setw(10)<<"Basic"<<setw(5)<<basic<<setw(10)<<"k"<<endl
    <<setw(5)<<"Allowance"<<setw(5)<<allowance<<endl
    <<setw(5)<<"Total"<<setw(5)<<total<<endl;
}