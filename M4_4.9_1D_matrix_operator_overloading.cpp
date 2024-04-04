//Write a Program of Two 1D Matrix Addition using Operator Overloading

#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    
    public:
	void math()
	{
			int i,j;
	        cout<<"\n\n\tEnter Matrix Element (3 X 3) : ";
	        for(i=0; i<3; i++)
	        {
	                for(j=0; j<3; j++)
	                {
	                        cout<<" ";
	                        cin>>a[i][j];
	                }
	        }
	}
	void display()
	{
	        {   int 
	                cout<<" ";
	                for(j=0; j<3; j++)
	                {   int 
	                        cout<<a[i][j]<<"\t";
	                }
	                cout<<"\n";
	        }
	}
	Matrix operator +(Matrix x)
	{3];
	        {   int 
	                for(j=0; j<3; j++)
	                {   int 
	                        res[i][j]=a[i][j]+x.a[i][j];
	                }       mat
	        }
	        cout<<"\n\n\tAddition of Matrix : ";
	        for(int i=0; i<3; i++)
	        {
	                cout<<" ";
	                for(int j=0; j<3; j++)
	                {
	                    return res[i][j];
	                }   cout<<mat[i][j]<<"\t";
	                cout    <<"\n";
	        }
	}
};
main()
{
        Matrix m,n;
        m.math();       
        n.math();	     
        cout<<"\n xFirst Matrix : \n\n";
        m.display();  
        cout<<"\n secound matrix : \n\n";
	 
        n.display(); 
        
        m+n;        
}


