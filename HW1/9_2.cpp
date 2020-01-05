#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
     //Ã¶¾ÙËã·¨
int main()
{
    int a,b,c,d,e,money,a1,b1,c1,d1,e1,x,sum=0,sum1,i,most=100,most1;
    double sum_all;
    cout<<"please enter the amount of money(0~99):"<<endl;
    cin>>money;
    cout<<"please enter the value of the 5 kind of cash(from the least to the most):"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    for (e1=0;e1<=(money/e);++e1)
    {
        for (d1=0;d1<=(money/d);++d1)
        {
            for (c1=0;c1<=(money/c);++c1)
            {
                for (b1=0;b1<=(money/b);++b1)
                {
                    for (a1=0;a1<=(money/a);++a1)
                    {
                        if (e1*e+d1*d+c1*c+b1*b+a1*a==money)
                        {
                            sum=e1+d1+c1+b1+a1;
                            if (sum<most)
                                most=sum;
                        }
                    }
                }
            }
        }
    }
    cout<<"the fewest number of cash is:"<<endl;
    cout<<most<<endl;
    srand(time(NULL));
    for (i=1;i<=2000;++i)
    {
        x=rand()%100;
        most1=100; sum1=0;
    for (e1=0;e1<=(x/e);++e1)
    {
        for (d1=0;d1<=(x/d);++d1)
        {
            for (c1=0;c1<=(x/c);++c1)
            {
                for (b1=0;b1<=(x/b);++b1)
                {
                    for (a1=0;a1<=(x/a);++a1)
                    {
                        if (e1*e+d1*d+c1*c+b1*b+a1*a==x)
                        {
                            sum1=e1+d1+c1+b1+a1;
                            if (sum1<most1)
                                most1=sum1;
                        }
                    }
                }
            }
        }
    }
    sum_all=sum_all+most1;
    }
    sum_all=sum_all/2000;
    cout<<"average fewest number of cash is:"<<endl;
    cout<<sum_all<<endl;
}
