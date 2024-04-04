/*Write C++program to implement class called Circle that has private member variables 
for radius.Include member functions to calculate the circle's area and circumference.*/
#include<iostream>
using namespace std;

class Circle
{
	float r,a,b;
	
	public :
		
		void input()
		{
			cout<<"\n\n\tEnter value of Radius : ";
			cin>>r;
		}
		void Area_circle()
		{
			a=3.14*r*r;
			cout<<"\n\n\tArea of circle : "<<a;
		}
		void Circumference_circle()
		{
			b=2*3.14*r;
			cout<<"\n\n\tCircumference of circle : "<<b;
		}
};

main()
{
	Circle C;
	C.input();
	C.Area_circle();
	C.Circumference_circle();
}
