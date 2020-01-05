#include <iostream>

using namespace std;

void getdate(int n,int *month, int *day)
{
    if (n>=1 && n <=31)
    {*month=1;*day=n;}
    if (n>31 && n<=59)
    {*month=2;*day=n-31;}
    if (n>59 && n<=90)
    {*month=3;*day=n-59;}
    if (n>90 && n<=120)
    {*month=4;*day=n-90;}
    if (n>120 && n<=151)
    {*month=5;*day=n-120;}
    if (n>151 && n<=181)
    {*month=6;*day=n-151;}
    if (n>181 && n<=212)
    {*month=7;*day=n-181;}
    if (n>212 && n<=243)
    {*month=8;*day=n-212;}
    if (n>243 && n<=273)
    {*month=9;*day=n-243;}
    if (n>273 && n<=304)
    {*month=10;*day=n-273;}
    if (n>304 && n<=334)
    {*month=11;*day=n-304;}
    if (n>334 && n<=365)
    {*month=12;*day=n-334;}
}
int main()
{
    int n,x1,x2;
    cout<<"please enter the day!"<<endl;
    cin>>n;
    getdate(n,&x1,&x2);
    cout<<"the month is:"<<x1<<endl<<"the day is:"<<x2<<endl;
    return 0;
}
