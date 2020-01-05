#include <iostream>
#include <iostream>
using namespace std;

int main()
{
long year,month,day,result,year_judge,result1=1,ans;
cout<<"please enter the year:"<<endl;
cin>>year;
cout<<"please enter the month:"<<endl;
cin>>month;
cout<<"please enter the day:"<<endl;
cin>>day;
result = (year % 4 == 0 && year % 100 !=0)|| year % 400 == 0;
if (result)
    year_judge=1;
else
    year_judge=0;
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    if(day>31)
        {cout<<"invalid"<<endl;
        result1=0;break;}
case 4:
case 6:
case 9:
case 11:
    if(day>30)
        {cout<<"invalid"<<endl;
        result1=0;break;}
case 2:
    if(year_judge==0)
        {if(day>28)
            {cout<<"invalid"<<endl;result1=0;}break;}
    if(year_judge==1)
        {if (day>29)
            {cout<<"invalid"<<endl;result1=0;}break;}
}
if (result1==1)
    {if (month<3)
        {ans=31*(month-1)+day;
        cout<<ans<<endl;}
    if (month>2)
        {if (year_judge==0)
            {ans=31*(month-1)+day-(4*month+23)/10;
            cout<<ans<<endl;}
        if (year_judge==1)
            {ans=31*(month-1)+day-(4*month+23)/10+1;
            cout<<ans<<endl;}}
    return 0;
}
}
