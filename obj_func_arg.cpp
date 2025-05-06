#include <iostream>

using namespace std;

class Time
{
int hours, mins, sec;

public:

void getTime()

{

int h, m, s;

cout << "Enter time in 24 hour format (HH:MM:SS): ";

cin >> h >> m >> s;

hours = h;

mins = m;

sec = s;
}
void putTime()

{

cout << "Time: " << hours << ":" << mins << ":" << sec << endl;
}
void sum(Time t1, Time t2);
};
void Time::sum(Time t1, Time t2)
{
hours = t1.hours + t2.hours;

mins = t1.mins + t2.mins;

sec = t1.sec + t2.sec;

if (mins >= 60)
{
hours = hours + mins / 60;

mins = mins % 60;
}
if (sec >= 60)
{
hours = hours + sec/ 60;

sec = sec % 60;
}
}
int main(){

Time t1, t2, t3;

t1.getTime();

t2.getTime();

t3.sum(t1, t2);

cout << "For Object1:" << "\n";

t1.putTime();

cout << "For Object2: " << "\n";

t2.putTime();

cout << "For Object3:" << "\n";

t3.putTime();
return 0;
}