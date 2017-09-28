//Brandon Roy 2/22/17
#include "Program.h"
#include <iostream>
#include <string>
using namespace std;

Program::Program()
{
    campus = "Default";
    degree = "Unavailable";
    major = "Unavailable";
    minor = "Unavailable";
}
Program::~Program()
{
    //dtor
}
Program::Program(string campus, string degree, string major, string minor)
{
    this->campus = campus;
    this->degree = degree;
    this->major = major;
    this->minor = minor;
}
void Program::input_data()
{
    cout << "Enter Campus (RH, LC, WC): ";
    cin >> campus;
    while (campus != "RH" && campus != "LC" && campus != "WC")
    {
        cout << "Invalid Input. Try Again. Enter Campus (RH, LC, WC): ";
        cin >> campus;
    }

    cout << "Enter Degree Type (BS, BA): ";
    cin >> degree;
    while (degree != "BS" && degree != "BA")
    {
        cout << "Invalid Input. Try Again. Enter Degree Type (BS, BA): ";
        cin >> degree;
    }

    cin.ignore();
    cout << "Enter Major (Type UNDECLARED if no major selected): ";
    getline(cin, major);

    cout << "Enter Minor (Type NONE if no minor selected): ";
    getline(cin, minor);
}
void Program::print()
{
    cout << endl << "Student's Campus: " << campus << endl;
    cout << "Student's Degree Type: " << degree << endl;
    cout << "Student's Major: " << major << endl;
    cout << "Student's Minor: " << minor << endl;
}
//****************************************************************
string Program::get_campus()
{
    return campus;
}
string Program::get_degree()
{
    return degree;
}
string Program::get_major()
{
    return major;
}
string Program::get_minor()
{
    return minor;
}
//******************************************************************
void Program::set_campus(string campus)
{
    this->campus = campus;
}
void Program::set_degree(string degree)
{
    this->degree = degree;
}
void Program::set_major(string major)
{
    this->major = major;
}
void Program::set_minor(string minor)
{
    this->minor = minor;
}
