#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <iostream>
using namespace std;
class time
{protected:
    int hour;
    int minute;
    int second;
public:
    time(int a,int b,int c)
    {hour=a;minute=b;second=c;}
    time & operator++();
    time & operator--();
    time operator ++(int);
    time operator --(int);
    void show()
    {
        cout<<"hour:"<<' '<<hour<<endl;
        cout<<"minute:"<<' '<<minute<<endl;
        cout<<"second:"<<' '<<second<<endl;
        cout<<endl;
    }
    time & operator +=(const &a);
    time & operator -=(const &a);
};


#endif // TIME_H_INCLUDED
