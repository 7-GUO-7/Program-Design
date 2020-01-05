#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double I200,ans;
    int input,times,i,n;
    cout<<"please enter the n of In you want:"<<endl;
    cin>>input;
    times=200-input;
    I200=0.5*(1/(201*2.7182818)+1.0/201);
    n=200;
    ans=I200;
    for (i=1;i<=times;++i)
    {
        ans=(1-ans)/n;
        n=n-1;
    }
    cout<<ans<<endl;
}
/*  n=1 ans=0.367879
    n=2 ans=0.264241
    n=3 ans=0.207277
    n=4 ans=0.170893
    n=5 ans=0.145533
    n=6 ans=0.126802
    n=7 ans=0.112384
    n=8 ans=0.100932
    n=9 ans=0.0916123
    n=10 ans=0.0838771
    n=11 ans=0.0773522
    n=12 ans=0.0717733
    n=13 ans=0.0669477
    n=14 ans=0.0627322
    n=15 ans=0.0590175
    n=16 ans=0.0557193
    n=17 ans=0.0527711
    n=18 ans=0.0501199
    n=19 ans=0.0477228
    n=20 ans=0.0455449      */
