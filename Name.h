//Brandon Roy 2/21/17
#ifndef NAME_H
#define NAME_H

#include <string>
#include <stdio.h>

using namespace std;

class Name
{
    public:
        Name();
        Name(string, string, string);
        ~Name();

        string get_first_name();
        string get_last_name();
        string get_middle_initial();

        void set_first_name(string first_name);
        void set_last_name(string last_name);
        void set_middle_initial(string middle_initial);

        void input_data();
        void print();

    private:
        string first_name;
        string last_name;
        string middle_initial;
};

#endif // NAME_H
