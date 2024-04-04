/*Create a class person having members name and age. Derive a class student having member 
percentage. Derive another class teacher having member salary. Write necessary member function 
to initialize, read and write data. Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;

class Person
{
	protected :
	string name;
	int age;
	
	public :
		void person_name()
		{
			cout<<"\n\n\tEnter Name Of Student : ";
			cin>>name;
		}
		void person_age()
		{
			cout<<"\n\n\tEnter Age Of Student : ";
			cin>>age;
		}	   
};

class Student : public Person
{
	protected :
	float per;
	
	public :
		void student_percentage()
		{
			cout<<"\n\n\tEnter Student Percentage :";
			cin>>per;
		}
};

class Teacher : public Student
{
	protected :
	int salary;
	
	public :
		void teacher_salary()
		{
			cout<<"\n\n\tEnter Teacher Salary : ";
			cin>>salary;
		}
		void print_data()
		{
			cout<<"\n\n\tName Of Student : "<<name;
			cout<<"\n\n\tAge Of Student : "<<age;
			cout<<"\n\n\tStudent Percentage : "<<per;
			cout<<"\n\n\tTeacher Salary : "<<salary;
		}
};

main()
{
	Teacher t;
	t.person_name();
	t.person_age();
	t.student_percentage();
	t.teacher_salary();
	t.print_data();
}
