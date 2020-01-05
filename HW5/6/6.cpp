#include <iostream>

using namespace std;

class time
{
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

time & time::operator++()
{
    if (second+1<60)
        ++second;
    if (second+1==60)
    {
        if (minute+1==60)
        {minute=0;second=0;++hour;}
        else
        {second=0;++minute;}
    }
    return *this;
}

time time::operator++(int x)
{
    time p=*this;
    if (second+1<60)
        ++second;
    if (second+1==60)
    {
        if (minute+1==60)
        {minute=0;second=0;++hour;}
        else
        {second=0;++minute;}
    }
    return p;
}

time & time::operator--()
{
    if (second>0)
        --second;
    if (second==0)
    {
        if (minute==0)
        {--hour;second=59;minute=59;}
        else
        {second=59;--minute;}
    }
    return *this;
}

time time::operator--(int x)
{
    time p=*this;
    if (second>0)
        --second;
    if (second==0)
    {
        if (minute==0)
        {--hour;second=59;minute=59;}
        else
        {second=59;--minute;}
    }
    return p;
}
time & time::operator +=(const int &a)
{
    int t1,t2;
    second+=a;
    t1=second/60;
    second=second%60;
    minute+=t1;
    t2=minute/60;
    minute=minute%60;
    hour+=t2;
    return *this;
}

time & time::operator -=(const int &a)
{
    int t1,t2;
    second-=a;
    if (second<0)
        {
            t1=(0-second)/60+1;
            second=t1*60+second;
            minute-=t1;
        }
    if (minute<0)
        {
            t2=(0-minute)/60+1;
            minute=t2*60+minute;
            hour-=t2;
        }
    return *this;
}


int main()
{
    time time1(1,59,59);
    (++time1).show();
    time1++;
    (time1++).show();
    time1.show();
    time1+=63;
    time1.show();
    time1-=120;
    time1.show();
    return 0;
}


