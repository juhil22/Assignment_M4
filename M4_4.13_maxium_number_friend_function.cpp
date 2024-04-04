//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

class Max_No
{
	int a, b;
	
	friend void find_max(Max_No M)
	{
					if(M.a>M.b)
						cout<<"\n\n\t"<<M.a<<" is Maximum...";
					else
						cout<<"\n\n\t"<<M.b<<" is Maximum...";
	}
	
	public :
				void getdata(int x, int y)
				{
					a=x;
					b=y;
				}				
};

main()
{
	Max_No obj;
	
	obj.getdata(20,50);
	
	find_max(obj);
}


