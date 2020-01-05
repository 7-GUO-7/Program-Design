#include <iostream>

using namespace std;

// the first way is always 9 min

//the second way is from 7 to 9 min

//so way 2 is more reasonable!

int main()
{
    int s1=9;
    // the first way is always 9 min
    cout<<"time of way 1 is:"<<s1<<endl;

    int s2_1=7,s2_2=8,s2_3=9,i;
    int A[10]={5,1,1,1,1,1,1,1,1};
    int ans[10]={0};
    int time=0;
    int t1=0,t2=0,i2,j;
    for (i=0;i<9;++i)
        {
            t1=A[0];
            t2=A[1];
        for (j=2;j<=9;++j)
        {
            if (t1<t2)
                t1+=A[j];
            else
                t2+=A[j];
        }
        if (t1<t2)
            time=t2;
        else
            time=t1;
        ans[i]=time;
        A[i]=1;
        A[i+1]=5;
        }
        cout<<"time of way 2 is:"<<endl;
        for (i2=0;i2<=i-1;++i2)
            cout<<ans[i2]<<" ";
    return 0;
}
