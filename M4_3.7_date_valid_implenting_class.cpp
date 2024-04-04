/*Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
 Include member functions to set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDay(int d) 
	{
        day = d;
    }

    void setMonth(int m) 
	{
        month = m;
    }

    void setYear(int y) 
	{
        year = y;
    }

    int getDay() const 
	{
        return day;
    }

    int getMonth() const 
	{
        return month;
    }

    int getYear() const 
	{
        return year;
    }

    void isValidDate() const 
	{
        if (year < 0 || month < 1 || month > 12 || day < 1)
            cout << "\n\n\tThis is not a valid date.";
        else {
            switch(month) 
			{
                case 2:
                    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                        cout << "\n\n\tThis is a valid date.";
                    else if (day <= 28)
                        cout << "\n\n\tThis is a valid date.";
                    else
                        cout << "\n\n\tThis is not a valid date.";
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    if (day <= 30)
                        cout << "\n\n\tThis is a valid date.";
                    else
                        cout << "\n\n\tThis is not a valid date.";
                    break;
                default:
                    if (day <= 31)
                        cout << "\n\n\tThis is a valid date.";
                    else
                        cout << "\n\n\tThis is not a valid date.";
            }
        }
    }
};

main() 
{
    int day, month, year;

    cout << "\n\n\tEnter day: ";
    cin >> day;
    cout << "\n\n\tEnter month: ";
    cin >> month;
    cout << "\n\n\tEnter year: ";
    cin >> year;

    Date date(day, month, year);

    date.isValidDate();

}

