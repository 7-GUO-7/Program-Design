#include "student.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;
student::student(long long a, char b[], int c, int d, long long e)
{
    No=a;
    strcpy(name,b);
    year=c;
    month=d;
    tel=e;
}

student::student(){}

void student::show()
{
    cout<<left<<setw(15)<<No<<left<<setw(10)<<name<<left<<setw(15)<<year<<left<<setw(15)<<month<<left<<setw(15)<<tel<<endl;
}

student::student(student & a)
{
    No=a.No;
    strcpy(name,a.name);
    year=a.year;
    month=a.month;
    tel=a.tel;
}

long long student::show_No()
{
    return No;
}
