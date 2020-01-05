#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
using namespace std;
class Date
{
public:

    int year;
    int month;
    int day;
public:
    void setDate(int a,int b,int c);
    Date (int a=1,int b=1,int c=1990);
    Date & operator +=(int add_day);
    Date & operator ++();
    Date operator ++(int x);
    bool operator<(const Date &b);
    friend ostream& operator<<(ostream &os,const Date& obj);
};



#endif // DATE_H_INCLUDED
