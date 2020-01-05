#include "bank.h"
#include <iostream>
#include <cmath>
using namespace std;
int num=0;
bank::bank(int b,int c,int d)//month\day\amount of money
{
    num++;
    ID=num;
    month=b;
    day=c;
    amount=d;
}
double bank::rate=0.01;
void bank::change(double new_rate)
{
    rate=new_rate;
}
void bank::new_amount(double month_of_plus)
{
    cout<<(amount*pow((1+rate),month_of_plus))<<endl;
}
