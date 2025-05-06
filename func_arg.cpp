#include <iostream>

using namespace std;
class time{
    int hours , minutes;
    public :
    void getTime(int h , int m){
        hours = h ;
        minutes = m ;

    }
    void putTime(){
        cout << hours << ":" << minutes << endl ;

}
void sum(time t1, time t2);
};
void time::sum(time t1 , time t2){
    hours = t1.hours + t2.hours;
    minutes = t1.minutes + t2.minutes;
}
int main(){
    time t1,t2,t3;
    t1.getTime(5,30);
    t2.getTime(3,20);
    t3.sum(t1,t2);
    cout<<"For object t1"<<endl;
    t1.putTime();
    cout<<"For object t2"<<endl;
    t2.putTime();
    cout<<"For object t3"<<endl;
    t3.putTime();
    return 0;
}