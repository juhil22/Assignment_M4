/*Write a C++ program to implement a class called Student thathas private member variables for name, class, roll 
number, and marks. Include member functions to calculate the grade based on the marks and display the student's 
information. Accept address from each student implement using of aggregation*/

#include <iostream>
using namespace std;

class Student 
{
	protected:
    	int rollNumber;

	public:
    	void get_rollno() 
		{
        	cout << "\n\n\tEnter Roll No. : ";
        	cin >> rollNumber;
    	}
    	void printf_rollno() 
		{
        	cout << "\n\n\tRoll No. : " << rollNumber;
    	}
};

class Test 
{
protected:
    int sub1_marks, sub2_marks;

public:
    void get_Marks() 
	{
        cout << "\n\n\tEnter Subject 1. Marks : ";
        cin >> sub1_marks;
        cout << "\n\tEnter Subject 2. Marks : ";
        cin >> sub2_marks;
    }

    void print_Marks() 
	{
        cout << "\n\tSubject 1. Marks : " << sub1_marks;
        cout << "\n\tSubject 2. Marks : " << sub2_marks;
    }
};

class Address 
{
protected:
    string street;
    string city;
    string state;
    string zipCode;

public:
    void get_address() {
        cout << "\n\n\tEnter Street: ";
        cin >> street;
        cout << "\n\tEnter City: ";
        cin >> city;
        cout << "\n\tEnter State: ";
        cin >> state;
        cout << "\n\tEnter Zip Code: ";
        cin >> zipCode;
    }

    void print_address() 
	{
        cout << "\n\tStreet: " << street;
        cout << "\n\tCity: " << city;
        cout << "\n\tState: " << state;
        cout << "\n\tZip Code: " << zipCode;
    }
};

class Result : public Student, public Test, public Address 
{
    int total_marks;
    char grade;

public:
    void calculateTotalMarks() 
	{
        total_marks = sub1_marks + sub2_marks;
        if (total_marks >= 90)
            grade = 'A';
        else if (total_marks >= 80)
            grade = 'B';
        else if (total_marks >= 70)
            grade = 'C';
        else if (total_marks >= 60)
            grade = 'D';
        else if (total_marks >= 50)
            grade = 'E';
        else
            grade = 'F'; // Fail
    }

    void displayResult() 
	{
        cout << "\n\n\tRoll Number: " << rollNumber;
        print_Marks();
        cout << "\n\tTotal Marks: " << total_marks;
        cout << "\n\tGrade: " << grade;
        print_address();
    }
};

int main() 
{
    Result r;
    r.get_rollno();
    r.get_Marks();
    r.calculateTotalMarks();
    r.get_address();
    r.displayResult();
}

