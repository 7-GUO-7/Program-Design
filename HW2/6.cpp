#include <iostream>

using namespace std;

int main()
{
    long long i1,i2,n,i3=0,flag;
    cout<<"please enter n:"<<endl;
    cin>>n;
    int prime[n-1]={2,0};
    for (i1=2;i1<=n;++i1)
    {
        i2=0,flag=1;
        while (prime[i2]!=0&&i2<=2000000)
        {
            if (i1%prime[i2]==0)
                flag=0;
            i2++;
        }
        if (flag==1)
        {
            cout<<i1<<endl;
            i3++;
            prime[i3]=i1;
        }
    }
    return 0;
}
