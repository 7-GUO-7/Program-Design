#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int n,i=1,x1,x2,t,p,x1_win=0;
    cout<<"please enter the n of games:"<<endl;
    cin>>n;
    cout<<"please enter the possibility p%(must be an integer):"<<endl;
    cin>>p;
    srand(time(NULL));
    for (i;i<=n;++i)
    {
        x1=0;x2=0;
        while ((x1<=11) && (x2<=11))
        {
            t=rand()%100;
            if (t<=p)
                ++x1;
            else
                ++x2;
        }
        if (x1>x2)
            ++x1_win;
    }
    cout<<"the first win:"<<x1_win<<endl;
    cout<<"the second win:"<<n-x1_win<<endl;
    return 0;
}
