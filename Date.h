//Brandon Roy 2/21/17
#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        Date();
        Date(int day, int month, int year);
        ~Date();

        int get_day();
        int get_month();
        int get_year();

        void set_day(int day);
        void set_month(int month);
        void set_year(int year);

        void input_data();
        void print();

    private:
        int month;
        int day;
        int year;
};

#endif // DATE_H
