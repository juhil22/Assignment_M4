/*
	Write a C++ program to implement a class called Bank Account that has 
	private member variables for account number and balance. Include member 
	functions to deposit and withdraw money from the account.
*/
#include <iostream>
using namespace std;
class BankAccount 
{
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) 
	{
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) 
	{
        balance += amount;
        cout<<"\n\n\tDeposit of " << amount << "\n\n\tsuccessful.";
    }
    void withdraw(double amount) 
	{
        if (amount <= balance) 
		{
            balance -= amount;
            cout<<"\n\n\tWithdrawal of " << amount << " successful.";
        } else 
		{
            cout<<"\n\n\tInsufficient funds. Withdrawal failed.";
        }
    }
    double getBalance() 
	{
        return balance;
    }
};

main() 
{
    BankAccount myAc(12345, 1000);

    myAc.deposit(500);
    cout<<"\n\n\tCurrent Balance: " <<myAc.getBalance();

    myAc.withdraw(2000);
    cout<<"\n\n\tCurrent Balance: " <<myAc.getBalance();

    myAc.withdraw(800);
    cout<<"\n\n\tCurrent Balance: " <<myAc.getBalance();
}

