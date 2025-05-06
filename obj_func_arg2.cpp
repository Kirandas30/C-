#include <iostream>

using namespace std;

class Time
{
int hours, mins;
public:
void getTime(int h , int m)
{
hours = h;
mins = m;
}
void putTime()
{
cout << "Time: " << hours << ":" << mins << endl;
}
void sum(Time t1, Time t2);
};
void Time::sum(Time t1, Time t2)
{
hours = t1.hours + t2.hours;
mins = t1.mins + t2.mins;
}
int main(){

Time t1, t2, t3;

t1.getTime(5,30);

t2.getTime(3,20);

t3.sum(t1, t2);

cout << "after addition For Object1:" << "\n";

t1.putTime();

cout << "after addition For Object2: " << "\n";

t2.putTime();

cout << "after addition  For Object3:" << "\n";

t3.putTime();
return 0;
}