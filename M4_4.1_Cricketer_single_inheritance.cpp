/*Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
Data member of batsman. Total runs, Average runs and best performance. Member functions input data, 
calculate average runs, Display data. (Single Inheritance)*/
#include<iostream>
using namespace std;

class Cricketer
{
	
	string name;

	public:
    void inputBasicData() 
	{
        cout <<"\n\n\tEnter name: ";
        cin >>name;
    }
};

class Batsman : public Cricketer 
{
    int total_Runs;
    double avg_Runs;
    string bestPerformance;

public:
    void inputBatsmanData() 
	{
        cout<<"\n\n\tEnter total runs: ";
        cin>>total_Runs;
        cout<<"\n\n\tEnter best performance: ";
        cin>>bestPerformance;
    }

    void calculateAverageRuns() 
	{
        avg_Runs=total_Runs; 
    }

    void displayData() 
	{
        cout<< "\n\n\tBatsman Details:";
        cout<< "\n\n\tName: " << name;
        cout<< "\n\n\tTotal Runs: " << total_Runs;
        cout<< "\n\n\tAverage Runs: " << avg_Runs;
        cout<< "\n\n\tBest Performance: "<<bestPerformance;
    }
};

main()
{
	Batsman B;
	B.inputBasicData();
	B.inputBatsmanData();
	B.calculateAverageRuns();
	B.displayData();
}

