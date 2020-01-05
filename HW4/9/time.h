#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include <iostream>
using namespace std;

class time_
{
private:
    int hour;
    int minute;
    int second;
public:
    time_(int a,int b,int c)
    {hour=a;minute=b;second=c;}
    void out()
    {
        cout<<"hour:"<<hour<<endl;
        cout<<"minute:"<<minute<<endl;
        cout<<"second:"<<second<<endl;
    }
    void set_time(int a,int b,int c)
    {
        hour=a;minute=b;second=c;
    }
};

#endif // TIME_H_INCLUDED
