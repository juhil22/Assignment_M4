/*Write a program to swap the two numbers using friend function without using third variable*/
#include<iostream>
using namespace std;
class Swapping
{
	int n1, n2;
	
	
	public :
			void getdata(int x, int y)
			{
				n1=x;
				n2=y;	
			}	
			
			friend void swap_values(Swapping S1)  
			{
				S1.n1=S1.n1+S1.n2;
				S1.n2=S1.n1-S1.n2;
				S1.n1=S1.n1-S1.n2;
				
				cout<<"\n\n\t n1 = "<<S1.n1;
				cout<<"\n\n\t n2 = "<<S1.n2;
			}
			
		
};

main()
{
	Swapping S;
	
	S.getdata(10,20);
	
	swap_values(S);
	
	
}
