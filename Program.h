//Brandon Roy 2/22/17
#ifndef PROGRAM_H
#define PROGRAM_H
#include <iostream>
#include <string>
using namespace std;


class Program
{
    public:
        Program();
        Program(string campus, string degree, string major, string minor);
        ~Program();

        string get_campus();
        string get_degree();
        string get_major();
        string get_minor();

        void set_campus(string campus);
        void set_degree(string degree);
        void set_major(string major);
        void set_minor(string minor);

        void input_data();
        void print();

    private:
        string campus;
        string degree;
        string major;
        string minor;
};

#endif // PROGRAM_H
