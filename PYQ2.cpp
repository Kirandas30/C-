#include <iostream>
using namespace std;

class employee
{
private:
    double salary;
    double hours;
    double bonusSell;
    double bonusWork;
    double finalSalary;

    void addSell();
    void addWork();

public:
    static int count;  // Static member to track number of objects created
    
    employee() { // Constructor increments count when an object is created
        count++;
    }

    void getinfo();
    void printFinalSalary();
    static int getCount();  // Static member function to get the count
};

// Initialize static member variable
int employee::count = 0;

void employee::getinfo()
{
    cout << "Enter base salary and working hours: ";
    cin >> salary >> hours;
    bonusSell = 0;  // Initialize bonus
    bonusWork = 0;  // Initialize bonus
    addSell();
    addWork();
    finalSalary = salary + bonusSell + bonusWork;
}

void employee::addSell()
{
    if (salary < 500)
    {
        bonusSell = 10;
        cout << "Bonus (based on salary): " << bonusSell << endl;
    }
}

void employee::addWork()
{
    if (hours > 6)
    {
        bonusWork = 5;
        cout << "Bonus (based on working hours): " << bonusWork << endl;
    }
}

void employee::printFinalSalary()
{
    cout << "Final Salary of the employee: " << finalSalary << endl;
}

int employee::getCount()
{
    return count;  // Return the total count of created objects
}

int main()
{
    employee p1[50];  // Array of employee objects

    for (int i = 0; i < 50; i++)  // Loop for 50 employees
    {
        p1[i].getinfo();
        p1[i].printFinalSalary();
    }

    // Display total number of employee objects created
    cout << "Total number of employee objects created: " << employee::getCount() << endl;

    return 0;
}
