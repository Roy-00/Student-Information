//Brandon Roy 2/27/17
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

int main()
{
    student student;

    student.input_data();
    student.print();
    return 0;
}
