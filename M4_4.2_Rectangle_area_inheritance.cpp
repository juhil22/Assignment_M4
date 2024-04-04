//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class Rectangle
{
	protected :
		float length;
		float breath;
	public:
		void get_Detail()
		{
		cout<<"\n\n\tEnter Length : ";
		cin>>length;
		cout<<"\n\n\tEnter Breath : ";
		cin>>breath;
		}
};
class Area : public Rectangle
{
	float area;
	public:
		void implement_detail()
		{
		area=length*breath;
		cout<<"\n\n\tArea Of Rectangle : "<<area;
	    }
};
main()
{
	Area a;
	a.get_Detail();
	a.implement_detail();
}
