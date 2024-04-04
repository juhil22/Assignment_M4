/*
Write a C++ Program to show access to Private Public and Protected using Inheritance
*/
#include<iostream>
using namespace std;
class Base
{
	private :
			int a;  
			
	protected :
			int b; 
			
	public :
			int c;    
			
			int get_a()
			{
				a=100;
				return a;	
			}	
	
};

class Derived : public Base
{
	public :
			int get_b()  
			{
				cout<<"\n\n\t Private member a = "<<get_a();
				b=200;
				return b;	
			}
			
			int get_c() 
			{
				c=300;
				return c;	
			}
			
};

main()
{
		Derived D;
	
		cout<<"\n\n\t Protected member b = "<<D.get_b();
		cout<<"\n\n\t Public member c = "<<D.get_c();
		cout<<"\n\n\t Public member c = "<<D.c;
}
