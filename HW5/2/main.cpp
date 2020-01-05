#include <iostream>
#include "bank.h"

using namespace std;
int main()
{
    bank bank1(1,23,10000);//month,day,amount of money
    bank bank2(5,8,20000);
    cout<<"the total money is:"<<endl;
    bank1.new_amount(3);//months of passing months
    cout<<"the new total money is:"<<endl;
    bank1.change(0.1);//the new rate
    bank1.new_amount(3);//months of passing months
    return 0;
}
