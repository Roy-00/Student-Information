//Function Declarations
//Brandon Roy 2/13/17
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
#include <vector>

#include "Program.h"
#include "Name.h"
#include "Date.h"

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H


class student
{
    public:
        student(); //Default Constructor

        student(int, string, string, string, int, int, int, string, char, string, string, string, string); //Overloaded Constructor

        ~student(); //Destructor

        //Accessor Functions
        int get_student_id();
        string get_first_name();
        string get_last_name();
        string get_middle_initial();
        int get_Bmonth();
        int get_Bdate();
        int get_Byear();
        string get_gender();
        char get_gender_choice();
        string get_campus();
        string get_degree();
        string get_major();
        string get_minor();

        //Mutator Functions
        void set_student_id(int);
        void set_first_name(string);
        void set_last_name(string);
        void set_middle_initial(string);
        void set_Bmonth(int);
        void set_Bdate(int);
        void set_Byear(int);
        void set_gender(string);
        void set_gender_choice(char);
        void set_campus(string);
        void set_degree(string);
        void set_major(string);
        void set_minor(string);

        int ValidBirth(int, int, int);
        void input_data();
        void print();
    private:
        //Member Variables
        int student_id;
        Name name;
        Date date;
        Program program;
        string gender;
        char gender_choice;
        string campus, degree, major, minor;
};

#endif // STUDENT_H
