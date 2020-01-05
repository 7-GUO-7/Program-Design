#include <iostream>

using namespace std;

long long fib(int n)
{
    static long long a=1,b=1,ans;
    if (n==1||n==2)
        return 1;
    else
    {
        ans = a+b;
        a=b;
        b=ans;
        return ans;
    }
}
int main()
{
    int input,i;
    cout<<"please enter the number you want:"<<endl;
    cin>>input;
    for (i=1;i<=input;++i)
    cout<<fib(i)<<endl;
    return 0;
}
