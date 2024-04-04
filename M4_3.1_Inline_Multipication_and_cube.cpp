/*Write a program to find the multiplication values and the cubic values using 
inline function*/

#include<iostream>
using namespace std;

class Math
{
	int a,b,x;
	
	public: 
	inline void Input_data()
	{
		cout<<"\n\n\tEnter Value of A : ";
		cin>>a;
		cout<<"\n\n\tEnter Value of B : ";
		cin>>b;
		cout<<"\n\n\tEnter Value of X for cube : ";
		cin>>x;
	}
	inline void Multiplication()
	{
		cout<<"\n\n\tMultiplication : "<<a*b;
	}
	inline void Cubic()
	{
		cout<<"\n\n\tCube : "<<x*x*x;
	}
};

main()
{
	Math M;
	M.Input_data();
	M.Multiplication();
	M.Cubic();
}
