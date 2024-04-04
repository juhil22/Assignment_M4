/*Assume that the test results of a batch of students are stored in three different classes. 
Class Students are storing the roll number. Class Test stores the marks obtained in two subjects
and class result contains the total marks obtained in the test. The class result can inherit 
details of the marks obtained in the test and roll number of students (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

class Student 
{
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) 
	{
        rollNumber = roll;
    }

    int getRollNumber() 
	{
        return rollNumber;
    }
};

class Test : public Student 
{
protected:
    int subject1Marks;
    int subject2Marks;
public:
    void setMarks(int marks1, int marks2) 
	{
        subject1Marks = marks1;
        subject2Marks = marks2;
    }

    void displayMarks() 
	{
        cout << "\n\n\tMarks in Subject 1: " << subject1Marks << endl;
        cout << "\n\n\tMarks in Subject 2: " << subject2Marks << endl;
    }
};
class Result : public Test 
{
public:
    void displayTotalMarks() 
	{
        cout << "\n\n\tTotal Marks: " << (subject1Marks + subject2Marks);
    }
};

main() 
{
    Result studentResult;

    studentResult.setRollNumber(101);
    studentResult.setMarks(85, 90);
    cout << "\n\n\tRoll Number: " << studentResult.getRollNumber();
    studentResult.displayMarks();
    studentResult.displayTotalMarks();
}


