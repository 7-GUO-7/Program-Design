#ifndef TIME_AND_DATE_H_INCLUDED
#define TIME_AND_DATE_H_INCLUDED
#include "TIME.h"
#include "DATE.h"
class time_and_date:public Date,public time
{
public:
    time_and_date(int a,int b,int c,int d,int e,int f);
    time_and_date & operator ++();
    time_and_date & operator +=(const &a);
    void show();
};


#endif // TIME_AND_DATE_H_INCLUDED
