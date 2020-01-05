#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
using namespace std;
#include <iostream>
class employee
{
protected:
    char *name;
    int No;
public:
    employee(char *p,int num);
    virtual void output();
};

class salaried_employee:public employee
{
private:
    int week;
    int salary_per_week;
public:
    salaried_employee(char *p,int num, int week1,int salary_per_week1);
    void output();
};

class hourly_employee:public employee
{
private:
    int hour;
    int salary_per_hour;
public:
    hourly_employee(char *p,int num, int hour1,int salary_per_hour1);
    void output();
};

class commission_employee:public employee
{
    int sell;
    float percentage;
public:
    commission_employee(char *p,int num, int sell1,float percentage1);
    void output();
};

class base_salary_employee:public employee
{
    int base_salary;
    int sell;
    float percentage;
public:
    base_salary_employee(char *p,int num, int sell1,float percentage1,int base);
    void output();
};
#endif // EMPLOYEE_H_INCLUDED
