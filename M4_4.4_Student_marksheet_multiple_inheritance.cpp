/*Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include <iostream>
using namespace std;

class Student 
{
	protected:
    int rollNumber;

public:
    void get_rollno()
    {
    	cout<<"\n\n\tEnter Roll No. : ";
    	cin>>rollNumber;
	}
	void printf_rollno()
	{
		cout<<"\n\n\tEnter Roll No. : "<<rollNumber;
	}
};

class Test : public Student 
{
	protected:
    int sub1_marks,sub2_marks;

public:
    void get_Marks() 
	{
        cout<<"\n\n\tEnter Subject 1. Marks : ";
    	cin>>sub1_marks;
    	cout<<"\n\n\tEnter Subject 2. Marks : ";
    	cin>>sub2_marks;
    }

    void print_Marks() 
	{
        cout<<"\n\n\tEnter Subject 1. Marks : "<<sub1_marks;
    	cout<<"\n\n\tEnter Subject 2. Marks : "<<sub2_marks;
    }
};

class Result : public Test 
{

    int total_marks;

public:
    void calculateTotalMarks() 
	{
        total_marks =sub1_marks+sub2_marks;
    }

    void displayResult() 
	{
        cout << "\n\n\tRoll Number: " << rollNumber;
        cout << "\n\n\tTotal Marks: " << total_marks;
    }
};

main() 
{
    Result r;
    r.get_rollno();
    r.get_Marks();
    r.calculateTotalMarks();
    r.displayResult();
}

