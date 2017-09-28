//Brandon Roy 2/21/17
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
    day = 27;
    month = 2;
    year = 2017;
}

Date::~Date()
{
    //dtor
}

Date::Date(int month, int day, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}
//*******************************************************************************************
int Date::get_day()
{
    return day;
}
int Date::get_month()
{
    return month;
}
int Date::get_year()
{
    return year;
}
//*******************************************************************************************
void Date::set_day(int day)
{
    this->day = day;
}
void Date::set_month(int month)
{
    this->month = month;
}
void Date::set_year(int year)
{
    this->year = year;
}
//*******************************************************************************************
void Date::input_data()
{
    cout << "Now enter your birthday." << endl;
    cout << "Enter year: ";
    cin >> year;
    while (year > 2017 || year < 0)
    {
        cout << "Invalid Input. Try Again: ";
        cin >> year;
    }

    cout << "Enter month: ";
    cin >> month;
    while (month > 12 || month < 1)
    {
        cout << "Invalid Input. Try Again: ";
        cin >> month;
    }

    cout << "Enter day: ";
    cin >> day;
    switch(month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: while ((day < 1) || (day > 31))
                     {
                          cout << "Invalid Input. Try Again: ";
                          cin >> day;
                     }
                     break;
            case 4:
            case 6:
            case 9:
            case 11: while ((day < 1) || (day > 30))
                     {
                         cout << "Invalid Input. Try Again: ";
                         cin >> day;
                     }
                     break;
            case 2: while ((day < 1) || (day > 28))
                    {
                        cout << "Invalid Input. Try Again: ";
                        cin >> day;
                    }
                    break;
            default: break;
        }
}

void Date::print()
{
    cout << "Birthday entered: " << month << "/" << day << "/" << year << endl;
}
