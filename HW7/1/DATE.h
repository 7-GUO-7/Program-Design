#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Date
{
protected:
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
    void show()
    {
    string year_name[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    cout<<"Year: "<<year<<endl;
    cout<<"Month: "<<year_name[month-1]<<endl;
    cout<<"Day: "<<day<<endl;
    }
};





#endif // DATE_H_INCLUDED
