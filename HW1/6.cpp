#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    double length,ans,x,y,sum=0;
    long direction,step,m,i2,i1;
    cout<<"please enter the number m:"<<endl;
    cin>>m;
    cout<<"please enter the steps:"<<endl;
    cin>>step;
    srand(time(NULL));
    for (i1=1;i1<=m;++i1)
    {
        x=0,y=0;
        for (i2=1;i2<=step;++i2)
        {
            direction=rand()%4;
            switch(direction)
            {
                case 0:x+=1;break;
                case 1:x-=1;break;
                case 2:y+=1;break;
                case 3:y-=1;break;
            }
        }
        length=(pow(x,2))+(pow(y,2));
        length=sqrt(length);
        sum=sum+length;
    }
    ans=sum/m;
    cout<<"the average distance is:"<<endl;
    cout<<ans<<endl;
}
