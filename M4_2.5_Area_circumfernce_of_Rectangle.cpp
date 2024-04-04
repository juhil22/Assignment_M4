/*Write a C++ program to create a class called Rectangle that has private member 
variables for length and width. Implement member functions to calculate the 
rectangle's area and perimeter.*/

#include<iostream>
using namespace std;

class Rectangle
{
	float l,b,x,y;
	
	public :
		
		void input()
		{
			cout<<"\n\n\tEnter value of Length : ";
			cin>>l;
			cout<<"\n\n\tEnter value of Breath : ";
			cin>>b;
		}
		void Area_Rectangle()
		{
			x=l*b;
			cout<<"\n\n\tArea of Rectangle : "<<x;
		}
		void Circumference_Rectangle()
		{
			y=2*(l+b);
			cout<<"\n\n\tCircumference of Rectangle : "<<y;
		}
};

main()
{
	Rectangle R;
	R.input();
	R.Area_Rectangle();
	R.Circumference_Rectangle();
}
