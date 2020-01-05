#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

    //结果呈现正态分布

int main()
{
    srand(time(NULL));
    long i1,i2,i3,t,sum;
    long type[11]={0};
    for (i1=1;i1<=20000;++i1)
    {
        sum=0;
        for (i2=1;i2<=10;++i2)
        {
            t=rand()%2;
            if (t==0)
                sum+=5;
            else
                sum+=10;
        }
        ++type[sum/5-10];
    }
    for (i3=1;i3<=11;++i3)
    {cout<<type[i3-1]<<endl;}
    return 0;
}
