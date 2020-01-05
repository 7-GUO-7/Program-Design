#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long a,b,b1,i=1,i1,c1=0,c2=0,i3,i4,ans,sum;
    cout<<"please enter a:"<<endl;
    cin>>a;
    cout<<"please enter b:"<<endl;
    cin>>b;
    b1=b;
    while (b1%10!=b1)
    {
        b1=b1/10;
        i=i+1;
    }
    for (i1=a;i1<=b;++i1)
    {
        i4=i1;
        sum=0;
        for (i3=1;i3<=i;++i3)
        {
            sum=sum+(i4%10)*(i4%10)*(i4%10);  //int(pow((i4%10),3)+0.5);
            i4=i4/10;
        }
        if (sum==i1)
            cout<<i1<<endl;
    }
}
