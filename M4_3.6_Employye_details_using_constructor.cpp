#include <iostream>
#include <string>
using namespace std;

class Employee 
{
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) 
	{
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void calculateSalary(double performanceScore) 
    {
        if (performanceScore >= 0.8) 
	    {
            salary *= 1.1; 
        } 
        else if (performanceScore >= 0.6) 
	    {
            salary *= 1.05; 
        } 
    }
    
    string get_name() 
	{ 
		return name; 
	}
    int get_employeeid() 
	{ 
		return employeeID; 
	}
    double get_salary() 
	{ 
		return salary; 
	}
};

int main()
{
	Employee emp("Juhil Patel", 12345, 50000);
	emp.calculateSalary(0.8);
	cout << "\n\n\tEmployee Name : " << emp.get_name();
    cout << "\n\n\tEmployee ID : " << emp.get_employeeid();
    cout << "\n\n\tUpdated Salary : " << emp.get_salary();

}

