#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
  //Ì°ÐÄËã·¨
using namespace std;

int main()
{
    int a,b,c,d,e,money,a1,b1,c1,d1,e1,x,sum=0,sum1=0,i;
    double sum_all;
    cout<<"please enter the amount of money(0~99):"<<endl;
    cin>>money;
    cout<<"please enter the value of the 5 kind of cash(from the least to the most):"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    e1=money/e;
    money=money%e;
    d1=money/d;
    money=money%d;
    c1=money/c;
    money=money%c;
    b1=money/b;
    money=money%b;
    a1=money/a;
    sum=a1+b1+c1+d1+e1;
    cout<<"the fewest number of cash is:"<<endl;
    cout<<sum<<endl;
    srand(time(NULL));
    for (i=1;i<=20000;++i)
    {
        x=rand()%100;
        e1=x/e;
        x=x%e;
        d1=x/d;
        x=x%d;
        c1=x/c;
        x=x%c;
        b1=x/b;
        x=x%b;
        a1=x/a;
        sum1=a1+b1+c1+d1+e1;
        sum_all=sum_all+sum1;
    }
    sum_all=sum_all/20000;
    cout<<"average fewest number of cash is:"<<endl;
    cout<<sum_all<<endl;
}
