/*
	Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
*/
#include<iostream>
using namespace std;

class Father 
{
	protected:
	int prop=100;
	int finalProp = 40;
	
	public:
	void property()
	{
		cout<<"\n\n\tinitial property of father ="<<prop;
	}
	void FinalProperty()
	{
		
		finalProp = prop-60;
		cout<<"\n\n\tFinal property of father ="<<finalProp;	
	}	
};

class Mother : public Father
{
	private:
		int prop_mother;
	public:
		void property()
		{
			cout<<"\n\n\tproperty of Mother = "<<prop-40;
		}
};

class Son : public Father
{
	public:
		void property()
		{
			int Sonprop;
			Sonprop = finalProp-10;
			cout<<"\n\n\tSon property = "<<Sonprop;
		}
};

main()
{
	Mother m;
	Son s;
	s.property();
	m.property();
	m.Father::property(); 
	m.FinalProperty();
}
