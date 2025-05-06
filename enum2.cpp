#include <iostream>

using namespace std;
enum Day
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday};
int main()
{
    /*cout<<"Shape code of  Monday is "<<Monday<<"\n";
    cout<<"Shape code of Tuesday is  "<<Tuesday<<"\n";
    cout<<"Shape code of Wednesday is  "<<Wednesday<<"\n";
    cout<<"Shape code of Thursday day is  "<<Thursday<<"\n";
    cout<<"Shape code of friday is  "<<Friday<<"\n";
    cout<<"Shape code of Saturday is  "<<Saturday<<"\n";
    cout<<"Shape code of Sunday is  "<<Sunday<<"\n";*/

    int a;
    cout << "Enter your choice of day code";
    cin >> a;
   Day d = (Day)a;// type casts the integer' a 'into a value of enum type Day
    switch (d)
    {
    case Sunday:
        cout << "Day code is Sunday";
        break;
    case Monday:
        cout << "Day code is Monday";
        break;
    case Tuesday:
        cout << "Day code is Thuesday";
        break;
    case Wednesday:
        cout << "Day code is Wednesday";
        break;
    case Thursday:
        cout << "Day code is Thursday";
        break;
    case Friday:
        cout << "Day code is Friday";
        break;
    case Saturday:

        cout << "Day code is Saturday";
        break;
    default:
        cout << "wrong choice";
        break;
    }
    return 0;


}
