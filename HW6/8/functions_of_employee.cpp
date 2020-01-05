#include "employee.h"
#include <iostream>
using namespace std;

void employee::output(){}

employee::employee(char *p,int num)
{
    name=p;
    No=num;
}

salaried_employee::salaried_employee(char *p,int num, int week1,int salary_per_week1):employee(p,num)
{week=week1;salary_per_week=salary_per_week1;}
void salaried_employee::output()
{
    cout<<name<<' '<<No<<' '<<"Money: "<<week*salary_per_week<<endl;
}

hourly_employee::hourly_employee(char *p,int num, int hour1,int salary_per_hour1):employee(p,num)
{hour=hour1;salary_per_hour=salary_per_hour1;}
void hourly_employee::output()
{
    if (hour<=40)
    cout<<name<<' '<<No<<' '<<"Money: "<<hour*salary_per_hour<<endl;
    else
    {
        int sum=(40)*salary_per_hour+2*(hour-40)*salary_per_hour;
        cout<<name<<' '<<No<<' '<<"Money: "<<sum<<endl;
    }
}

commission_employee::commission_employee(char *p,int num, int sell1,float percentage1):employee(p,num)
{sell=sell1;percentage=percentage1;}
void commission_employee::output()
{
    cout<<name<<' '<<No<<' '<<"Money: "<<sell*percentage<<endl;
}

base_salary_employee::base_salary_employee(char *p,int num, int sell1,float percentage1,int base):employee(p,num)
{sell=sell1;percentage=percentage1;base_salary=base;}
void base_salary_employee::output()
{
    if (sell*percentage>base_salary)
    cout<<name<<' '<<No<<' '<<"Money: "<<sell*percentage<<endl;
    else
    cout<<name<<' '<<No<<' '<<"Money: "<<base_salary<<endl;
}
