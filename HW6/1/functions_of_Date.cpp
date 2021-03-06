#include "Date.h"
#include <iostream>
#include <string>
using namespace std;
int normal[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};

bool check(int a,int b,int c)
{
    bool flag=0;
    if ((c%4==0&&c%100!=0)||(c%400==0))
    {
        if (b<leap[a-1])
            flag=1;
        else
            flag=0;
    }
    else
    {
        if (b<normal[a-1])
            flag=1;
        else
            flag=0;
    }
    return flag;
}

Date::Date(int a,int b,int c)
{
    if (check(a,b,c))
    {year=c; month=a; day=b;}
    else
    {year=1990;month=1;day=1;}
}

ostream& operator<<(ostream &os,const Date&obj)
{
    string year_name[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    os<<year_name[obj.month-1]<<' '<<obj.day<<' '<<obj.year;
    return os;
}

void Date::setDate(int a,int b,int c)
{
    year=c;
    month=a;
    day=b;
}

Date & Date::operator++()
{
    if ((year%4==0&&year%100!=0)||(year%400==0))
    {
        if (month==2)
        {if (day==29)
        {
            day=1;
            month=3;
        }}
    }
    else
        {if (month==2)
        {
            if (day==28)
            {
                day=1;
                month=3;
            }
        }}
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        if (day==31)
        {++month;
        day=1;}
        else
        ++day;
    }
    else
        {if (day==30)
        {++month;
        day=1;}
        else
            ++day;}
    if (month==13)
    {
        ++year;
        month=1;
    }
    return *this;
}

Date Date::operator++(int x)
{
    Date p=*this;
    ++*this;
    return p;
}

bool Date::operator<(const Date &b)
{
    bool flag=0;
    if ((year)<(b.year))
    {flag=1;
        return 1;}
    if ((year)==b.year)
    {
        if((month)<b.month)
            {flag=1;return 1;}
        if (month==b.month)
        {
            if (day<b.day)
            {
                flag=1;return 1;
            }
        }
    }
     if (!flag)
        return 0;
}

Date & Date::operator+=(int add_day)
{
    for (int i=0;i<add_day;++i)
        ++*this;
    return *this;
}
