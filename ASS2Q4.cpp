#include <iostream>
using namespace std;

const int n = 5;

class d
{
    float km, m, cm;

public:
    void input()
    {
        cin >> km >> m >> cm;
    }
    void display()
    {
        cout << "Distance in km = " << km << endl;
        cout << "Distance in m = " << m << endl;
        cout << "Distance in cm = " << cm << endl;
    }
    void add_distance(d d1, d d2)
    {
        km = d1.km + d2.km;
        m = d1.m + d2.m;
        cm = d1.cm + d2.cm;
    }
};

int main()
{
    d d[n], obj;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the distance in km, m, cm: " << "\n";
        d[i].input();
        d[i].display();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Displaying: " << endl;
        d[i].display();
    }
    int a, b;
    cout << "Enter the value of index to find the addition(0-4): ";
    cin >> a >> b;
    obj.add_distance(d[a], d[b]);
    cout << "After Addition: " << endl;
    obj.display();
    return 0;
}