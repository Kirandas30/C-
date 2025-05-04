#include <iostream>
using namespace std;

class BankAccount {
private:
    char depositorName[50];
    char accountNumber[20];
    char accountType[10];
    double balance;

public:
    // Constructor to initialize account details
    void assignValues(const char name[], const char accNum[], const char accType[], double initialBalance) {
        int i = 0;
        while (name[i] != '\0') {
            depositorName[i] = name[i];
            i++;
        }
        depositorName[i] = '\0';

        i = 0;
        while (accNum[i] != '\0') {
            accountNumber[i] = accNum[i];
            i++;
        }
        accountNumber[i] = '\0';

        i = 0;
        while (accType[i] != '\0') {
            accountType[i] = accType[i];
            i++;
        }
        accountType[i] = '\0';

        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount Deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << "\n";
        } else {
            cout << "Insufficient balance or invalid withdrawal amount!\n";
        }
    }

    // Function to display name and balance
    void display() const {
        cout << "Depositor Name: " << depositorName << "\n";
        cout << "Account Balance: " << balance << "\n";
    }
};

int main() {
    BankAccount account;
    account.assignValues("kiran Das", "123456789", "Savings", 5000.0);
    
    account.display();
    
    account.deposit(2000);
    account.display();
    
    account.withdraw(1500);
    account.display();
    
    account.withdraw(6000); // Attempt to withdraw more than balance
    account.display();
    
    return 0;
}