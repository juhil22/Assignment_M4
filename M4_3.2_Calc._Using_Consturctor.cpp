/*
	Write program of Addition, Subtraction, Division, Multiplication using constructor
*/

#include<iostream>
using namespace std;

class Math
{
	int n1, n2;
	
	public :
			Math(int a, int b)
			{
				n1=a;
				n2=b;	
			}	
			
			void add();
			void sub();
			void mul();
			void div();
};

void Math :: add()
{
	cout<<"\n\n\t Addition = "<<n1+n2;
}

void Math :: sub()
{
	cout<<"\n\n\t Subtraction = "<<n1-n2;
}

void Math :: mul()
{
	cout<<"\n\n\t Multiplication = "<<n1*n2;
}

void Math :: div()
{
	cout<<"\n\n\t Division = "<<n1/n2;
}

main()
{
	int x, y;
	cout<<"\n\n\t Input Number 1 : ";
	cin>>x;
	cout<<"\n\n\t Input Number 2 : ";
	cin>>y;
	
	Math M(x,y); 
	M.add();
	M.sub();
	M.mul();
	M.div();
		
}

