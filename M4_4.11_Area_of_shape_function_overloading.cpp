/*Write a program to calculate the area of circle, rectangle and triangle using Function 
	Overloading
Rectangle: Area * breadth Triangle: ½ *Area* breadth Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;

class area
{
	int l,br;
	float r,q;
	public:
		int sum(int a, int b)
			{	
				l=a;
				br=b;
				return l*br;	
			}
		int sum(float a, int b)
			{	
				q=a;
				br=b;
				return (0.5*l*br);	
			}
		int sum(float r)
			{	
				return (r*r*3.14);	
			}
};

main()
{
	area a;
	cout<<"\n\n\tArea of rectangle : "<<a.sum(10,20);
	cout<<"\n\n\tArea of triangle : "<<a.sum(2,6);
	cout<<"\n\n\tArea of circle : "<<a.sum(5);
}
