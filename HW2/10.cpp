#include <iostream>

using namespace std;

int perfectnum(int n)
{
    int i,i2=0,use=n,factor[1000]={0},sum=0,i3;
    for (i=1;i<use;++i)
    {
        if (use%i==0)
        {
            factor[i2]=i;
            i2++;
        }
    }
    for (i3=0;factor[i3]!=0;++i3)
    {
        sum+=factor[i3];
    }
    if (sum==n)
        return 1;
    else
        return 0;
}

int main()
{
    int low,above,m;
    cout<<"please enter low:"<<endl;
    cin>>low;
    cout<<"please enter above:"<<endl;
    cin>>above;
    for (m=low;m<=above;++m)
    {
        if (perfectnum(m)==1)
            cout<<m<<endl;
    }
    return 0;
}
