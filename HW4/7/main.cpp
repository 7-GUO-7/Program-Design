#include <iostream>

using namespace std;

int normal_year[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int leap_year[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

int leap_year_judge(int year)
{
    if (((year%4==0)&&(year%100!=0))||(year%400==0))
        return 1;
    else
        return 0;
}

int year_check(int year,int month,int day)
{
    if (leap_year_judge(year))
    {
        if (month>12 ||leap_year[month]<day)
            return 0;
        else
            return 1;
    }
    else
    {
        if (month>12 ||normal_year[month]<day)
            return 0;
        else
            return 1;
    }
}
int main()
{
    int original_;
    int year_flag;
    cout<<"please enter a string of year:"<<endl;
    cin>>original_;
    int ori_day=original_%100;
    int ori_month=(original_-ori_day)/100%100;
    int ori_year=((original_-ori_day)/100-ori_month)/100;

    year_flag=leap_year_judge(ori_year);

    if (year_check(ori_year,ori_month,ori_day)==0)
        cout<<"invalid! please enter again!"<<endl;
    else
    {

    cout<<"please enter the days you want to add:"<<endl;
    int add_day;
    cin>>add_day;

    int last=0;
    if (leap_year_judge(ori_year))
    {

        for (int i1=ori_month+1;i1<=12;++i1)
        {
            last+=leap_year[i1];
        }
        last+=(leap_year[ori_month]-ori_day)+1;
    }
    else
    {
        for (int i2=ori_month+1;i2<=12;++i2)
        {
            last+=normal_year[i2];
        }
        last+=(normal_year[ori_month]-ori_day)+1;
    }

    if (add_day>=last)
    {
        add_day=add_day-last;
        ori_year++;

        while (true)
        {
            year_flag=leap_year_judge(ori_year);
            if ((year_flag&&add_day<366)||(!year_flag&&add_day<365))
                break;
            else
            {
                if (year_flag)
                {
                    ori_year++;
                    add_day-=366;
                }
                else
                {
                    ori_year++;
                    add_day-=365;
                }
            }
        }

        int k=1;
        while (true)
        {

            if (year_flag)
            {
                if (add_day<leap_year[k])
                    break;
                else
                {
                    add_day-=leap_year[k];
                    k++;
                    ori_month++;
                }
            }
            else
            {
                if (add_day<normal_year[k])
                    break;
                else
                {
                    add_day-=normal_year[k];
                    k++;
                    ori_month++;
                }
            }
        }
        ori_day+=add_day;
    }
    else
    {
        year_flag=leap_year_judge(ori_year);
        int minus_day=last-add_day-1;
        ori_month=12;
        int t=12;
        if (year_flag)
        {
            while (true)
            {
                if (minus_day<leap_year[t])
                    break;
                else
                {
                    ori_month--;
                    minus_day-=leap_year[t];
                    t--;
                }
            }
            ori_day=leap_year[t]-minus_day;
        }
        else
        {
            while (true)
            {
                if (minus_day<normal_year[t])
                    break;
                else
                {
                    ori_month--;
                    minus_day-=normal_year[t];
                    t--;
                }
            }
            ori_day=normal_year[t]-minus_day;
        }

    }
    if (ori_year<10000)
    {
        cout<<"The year is: "<<ori_year<<endl;
        cout<<"The month is: "<<ori_month<<endl;
        cout<<"The day is: "<<ori_day<<endl;
    }
    else
        cout<<"Out of limitation!"<<endl;
    }
    return 0;
}
