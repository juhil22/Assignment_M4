/*
	Write a C++ program to create a class called Car that has private member variables 
	for company, model, and year. Implement member functions to get and set these 
	variables
*/

#include<iostream>
using namespace std;
class Car
{
	string company;
	string model;
	int year;
	
	public:
		void get_company()
		{
			cout<<"\n\n\tEnter Company Name : ";
			cin>>company;
		}
		void get_model()
		{
			cout<<"\n\n\tEnter Model Name : ";
			cin>>model;
		}
		void get_year()
		{
			cout<<"\n\n\tEnter Year : ";
			cin>>year;
		}
		void print_company()
		{
			cout<<"\n\n\tCompany Name : "<<company;
		}
		void print_model()
		{
			cout<<"\n\n\tModel Name : "<<model;
		}
		void print_year()
		{
			cout<<"\n\n\tYear : "<<year;
		}
};
main()
{
	Car c;
	c.get_company();
	c.get_model();
	c.get_year();
	c.print_company();
	c.print_model();
	c.print_year();
}
