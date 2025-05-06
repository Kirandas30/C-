#include<iostream>

using namespace std;
enum Week{Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};
int main(){
   /* cout<<"Shape code of Sunday is  "<<Sunday<<"\n";
    cout<<"Shape code of  Monday is "<<Monday<<"\n";
    cout<<"Shape code of Tuesday is  "<<Tuesday<<"\n";
    cout<<"Shape code of Wednesday is  "<<Wednesday<<"\n";
    cout<<"Shape code of Thursday day is  "<<Thursday<<"\n";
    cout<<"Shape code of friday is  "<<Friday<<"\n";
    cout<<"Shape code of Saturday is  "<<Saturday<<"\n";*/
    
    
    int a;
    cout<<"Enter your choice of day code";
    cin>>a;
    switch(a){
        case Sunday:
        cout<<"Day code is Sunday";
        break;
        case Monday:
        cout<<"Day code is Monday";
        break;
        case Tuesday:
        cout<<"Day code is Tuesday";
        break;
        case Wednesday:
        cout<<"Day code is Wednesday";
        break;
        case Thursday:
        cout<<"Day code is Thursday";
        break;
        case Friday:
        cout<<"Day code is Friday";
        break;
        case Saturday:
        cout<<"Day code is Saturday";
        break;
        
        
        default:
        cout<<"wrong choice";
        break;
    }
    return 0;
    }
