#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDED
#include <iostream>
class bank
{
    int ID;
    int month;
    int day;
    int amount;
    static double rate;
public:
    bank(int b,int c,int d);
    static void change(double new_rate);
    void new_amount(double month_of_plus);
};


#endif // BANK_H_INCLUDED
