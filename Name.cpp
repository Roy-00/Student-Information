//Brandon Roy 2/21/17
#include "Name.h"
#include <string>
#include <iostream>
using namespace std;

Name::Name()
{
    first_name = "Anthony";
    last_name = "Kenneth";
    middle_initial = "R";
}

Name::~Name()
{
    //dtor
}

Name::Name(string first_name, string last_name, string middle_initial)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->middle_initial = middle_initial;
}

void Name::input_data()
{
    cout << "Enter first name: ";
    cin >> first_name;
    cout << "Enter last name: ";
    cin >> last_name;
    cout << "Enter middle initial: ";
    cin >> middle_initial;
}
//******************************************************************
string Name::get_first_name()
{
    return first_name;
}
string Name::get_last_name()
{
    return last_name;
}
string Name::get_middle_initial()
{
    return middle_initial;
}
//******************************************************************
void Name::set_first_name(string first_name)
{
    this->first_name = first_name;
}
void Name::set_last_name(string last_name)
{
    this->last_name = last_name;
}
void Name::set_middle_initial(string middle_initial)
{
    this->middle_initial = middle_initial;
}

void Name::print()
{
    cout << "Name entered: " << first_name << " " << middle_initial << ". " << last_name << endl;
}
