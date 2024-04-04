//WAP to create simple calculator using class
#include<iostream>
using namespace std;

class calc
{
	int a,b;
	public :
		
		void input_value()
		{
			cout<<"\n\n\tEnter Value Of A : ";
			cin>>a;
			cout<<"\n\n\tEnter Value Of B : ";
			cin>>b;
		}
		void Addition()
		{
			cout<<"\n\n\tAddition : "<<a+b;
		}
		void Subtraction()
		{
			cout<<"\n\n\tSubtraction : "<<a-b;
		}
		void Multiplication()
		{
			cout<<"\n\n\tMultiplication : "<<a*b;
		}
		void Divison()
		{
			cout<<"\n\n\tDivison : "<<a/b;
		}		
};

main()
{
	calc c;
	c.input_value();
	c.Addition();
	c.Subtraction();
	c.Multiplication();
	c.Divison();
}
