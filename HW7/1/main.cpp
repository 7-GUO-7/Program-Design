#include <iostream>
#include "TIME_AND_DATE.h"
using namespace std;

int main()
{
    time_and_date c1(11,2,1999,23,59,59);//month day year hour minute second
    time_and_date c2(12,2,2018,23,58,59);
    c1.show();
    ++c1;//+1s
    c1.show();
    c2.show();
    c2+=120;//+120s
    c2.show();
    return 0;
}
