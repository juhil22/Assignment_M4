/*Write a C++ program to create a class called Person that has private member variables 
for name, age and country. Implement member functions to set and get the values of 
these variables.*/

#include<iostream>
using namespace std;

class Person
{
	string name,country;
	int age;
	
	public:
		void input_data()
		{
			cout<<"\n\n\tEnter Name of person : ";
			cin>>name;
			cout<<"\n\n\tEnter Age of person : ";
			cin>>age;
			cout<<"\n\n\tEnter Name of Country : ";
			cin>>country;
		}
		void print_data()
		{
			cout<<"\n\n\tName of person : "<<name;
			cout<<"\n\n\tAge of person : "<<age;
			cout<<"\n\n\tName of Country : "<<country;
		}
};

main()
{
	Person p;
	p.input_data();
	p.print_data();
}
