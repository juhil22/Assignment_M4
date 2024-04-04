/*Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include <iostream>
using namespace std;

class BankAccount 
{

    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

	public:
    	void assignValues(string name, string accNum, string type, double initialBalance) 
		{
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
    	}

    	void deposit(double amount) 
		{
        balance += amount;
        cout << "\n\n\tAmount deposited successfully. New balance: " << balance;
    	}

   		 void withdraw(double amount) 
		{
       	 if (balance >= amount) 
			{
        	    balance -= amount;
           	    cout << "\n\n\tAmount withdrawn successfully. New balance: " << balance;
        	} 
		 else 
			{
            cout << "\n\n\tInsufficient balance. Withdrawal failed.";
       	 	}
    }

    void display() 
	{
        cout << "\n\n\tDepositor Name: " << depositorName;
        cout << "\n\tAccount Number: " << accountNumber;
        cout << "\n\tAccount Type: " << accountType;
        cout << "\n\tBalance: " << balance;
    }
};

int main() 
{
    BankAccount account1;
    account1.assignValues("John Doe", "1234567890", "Savings", 1000.0);
    cout << "\n\n\tInitial Account Details:";
    account1.display();
    account1.deposit(500.0);
    account1.withdraw(200.0);
    cout << "\n\n\tUpdated Account Details:";
    account1.display();
}

