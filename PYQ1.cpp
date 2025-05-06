#include <iostream>
using namespace std;

class employee
{
//private:
    double salary;
    double hours;
    double bonusSell;
    double bonusWork;
    double finalSalary;
    void addSell();
    void addWork();

public:
    void getinfo();
    void printFinalSalary();
};
void employee ::getinfo()
{
    cout << "enter base salary and working hours : ";
    cin >> salary >> hours;
    bonusSell = 0; // Initialize bonus
    bonusWork = 0; // Initialize bonus
    addSell();
    addWork();
    finalSalary = salary + bonusSell + bonusWork;
}
void employee ::addSell()
{
    if (salary < 500)
    {
        bonusSell = 10;
        cout << "Bonus (based on salary): " << bonusSell << endl;
    }
}
void employee ::addWork()
{
    if (hours > 6)
    {
        bonusWork = 5;
        cout << "Bonus (based on working hours): " << bonusWork << endl;
    }
}

void employee ::printFinalSalary()
{
    cout << "Final Salary of the employee: " << finalSalary << endl;
}

int main()
{
    employee p1[50];

    for(int i = 0 ; i<=50;i++){
        p1[i].getinfo();
        p1[i].printFinalSalary();
    }
    //p1.getinfo();
    //
    return 0;
}