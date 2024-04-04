/*
	Write a C++ program to create a class called Triangle that has private member variables for the 
	lengths of its three sides. Implement member functions to determine if the triangle is equilateral,
	 isosceles, or scalene.
*/
#include<iostream>
using namespace std;
class Triangle
{
	float s1,s2,s3;
	
	public:
		void get_side();
		void check_value();
};
void Triangle :: get_side()
{
	cout<<"\n\n\tEnter Side 1 : ";
	cin>>s1;
	cout<<"\n\n\tEnter Side 2 : ";
	cin>>s2;
	cout<<"\n\n\tEnter Side 3 : ";
	cin>>s3;
}
void Triangle :: check_value()
{
	if(s1==s2 && s2==s3 && s3==s1)
	{
		cout<<"\n\n\tTriangle is Equilateral";
	}
	else if(s1==s2 || s1==s3 || s2==s3)
	{
		cout<<"\n\n\tTriangle is Isosceles";
	}
	else
	{
		cout<<"\n\n\tTriangle is Scalene";
	}
}

main()
{
	Triangle t;
	t.get_side();
	t.check_value();
}
