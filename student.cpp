//Function Definitions
//Brandon Roy 2/13/17

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>

#include "student.h"
#include "Program.h"
#include "Name.h"
#include "Date.h"

using namespace std;

student::student()
{
    student_id = 0;
    gender_choice = 'x';
}
student::student(int student_id, string first_name, string middle_initial, string last_name, int Bmonth, int Bdate, int Byear, string gender, char gender_choice, string campus, string degree, string major, string minor)
{
    this->student_id = student_id;
    this->gender_choice = gender_choice;
    //name.set_first_name(first_name); //Giving these variables from student to corresponding cpp files
    name.set_first_name(first_name);
    name.set_middle_initial(middle_initial);
    name.set_last_name(last_name);
    date.set_month(Bmonth);
    date.set_day(Bdate);
    date.set_year(Byear);
    program.set_campus(campus);
    program.set_degree(degree);
    program.set_major(major);
    program.set_minor(minor);
}
student::~student()
{
    //dtor
}
//******************************************************************
int student::get_student_id()
{
    return student_id;
}
string student::get_gender()
{
    return gender;
}
char student::get_gender_choice()
{
    return gender_choice;
}
string student::get_campus()
{
    return campus;
}
string student::get_degree()
{
    return degree;
}
string student::get_major()
{
    return major;
}
string student::get_minor()
{
    return minor;
}
//******************************************************************
void student::set_student_id(int student_id)
{
    this->student_id = student_id;
}
void student::set_gender(string gender)
{
    this->gender = gender;
}
void student::set_gender_choice(char gender_choice)
{
    this->gender_choice = gender_choice;
}
void student::set_campus(string)
{
    this->campus = campus;
}
void student::set_degree(string)
{
    this->degree = degree;
}
void student::set_major(string)
{
    this->major = major;
}
void student::set_minor(string)
{
    this->minor = minor;
}
//******************************************************************
void student::input_data()
{
    cout << "Enter your student ID: ";
    cin >> student_id;

    cout << endl << "Select your gender" << endl;
    cout << "------------------" << endl;
    cout << "A: Male" << endl << "B: Female" << endl;
    cin >> gender_choice;
    while (gender_choice != 'a' && gender_choice != 'A' && gender_choice != 'b' && gender_choice != 'B')
    {
        cout << "Invalid Input. Try Again: ";
        cin >> gender_choice;
    }
    if (gender_choice == 'a' || gender_choice == 'A')
        gender = "Male";
    if (gender_choice == 'b' || gender_choice == 'B')
        gender = "Female";

    name.input_data();
    date.input_data();
    program.input_data();
}
void student::print()
{
    cout << endl << "Student ID Number: " << student_id << endl;
    cout << "Student Gender: " << gender << endl;
    name.print();
    date.print();
    program.print();
}
