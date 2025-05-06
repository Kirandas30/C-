#include <iostream>

using namespace std;

class employee{

float salary, hrs;

static int count;

public:

float AddSal(float salary)

{
if (salary < 500)
{
cout << "Your Final Salary: ";

salary = salary + 10;

return salary;
}
return salary;
}
float Addwork (float salary, float hrs)
{
if (hrs > 6)
{
cout << "Your Final Salary: ";

salary = salary + 5;

return salary;
}
return salary;
}
void getinfo(float s, float hr)
{
salary = s; 
hrs = hr;

if (salary < 500 || hr > 6)
{
cout << AddSal(salary) << endl;
 cout << Addwork (salary, hrs) << endl;
}
count++;
}
static void getcount()
{
cout<<"Total employee object: "<<count<<endl;
}
};

int employee:: count=0;

int main()
{
employee e[50];

float s, hr;

for (int i = 0; i < 50; i++)
{


cout << "Enter Your Salary and hrs worked a day (employee" << i + 1 <<"):"<< endl; 

cin >> s >> hr;

e[i].getinfo(s, hr);
}
employee::getcount();
 return 0;

}