#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    string accountNumber;
    string accountType;
    double balance;

public:
    // Constructor to initialize the data members
    BankAccount(string accountHolderName, string accNumber, string accType, double initialBalance = 0)
    {
        name = accountHolderName;
        accountNumber = accNumber;
        accountType = accType;
        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0;
            cout << "Invalid initial balance! Set to 0." << endl;
        }
    }

    // Function to deposit money into the account
    void deposit(double amount = 0)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount = 0)
    {
        // if (amount > 0 && amount <= balance)
        // {
        //     balance -= amount;
        //     cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
        // }
        // else if (amount > balance)
        // {
        //     cout << "Insufficient funds! Withdrawal denied." << endl;
        // }
        // else
        // {
        //     cout << "Withdrawal amount must be positive!" << endl;
        // }

        if (amount > 0 && balance > amount)
        {
            balance -= amount;
            cout << amount << "withdraw, new balence is\t" << balance << endl;
        }
        else
        {
            cout << "Invalit amound entered\n";
        }
    }

    // Function to display account holder's name and balance
    void displayAccountDetails()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
{
    // Creating an object of BankAccount
    BankAccount account("AAKKU", "12345", "Savings", 50000.0);

    // Display initial account details
    account.displayAccountDetails();

    // Deposit money
    account.deposit(200.0);

    // Withdraw money
    account.withdraw(100.0);

    // Try withdrawing more money than available
    account.withdraw(700000.0); // Insufficient funds

    return 0;
}
