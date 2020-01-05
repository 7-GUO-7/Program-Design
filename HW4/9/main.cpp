#include <iostream>
#include <ctime>
using namespace std;

#include "time.h"

int main()
{
    int a1,a2,a3;
    cout<<"please enter the hour/minute/second you want:"<<endl;
    cin>>a1>>a2>>a3;
    time_ your_time(a1,a2,a3);
    cout<<"Your time is:"<<endl;
    your_time.out();
    cout<<endl;
    cout<<"Now the system time is:"<<endl;
    cout<<time(NULL)<<endl;
    cout<<endl;
    int a4,a5,a6;
    cout<<"please change the hour/minute/second :"<<endl;
    cin>>a4>>a5>>a6;
    your_time.set_time(a4,a5,a6);
    cout<<"New time is:"<<endl;
    your_time.out();
}
