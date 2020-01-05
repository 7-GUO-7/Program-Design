#include <iostream>

using namespace std;

int main()
{
    int n,p,num=0,j=1;
    cout<<"please enter n you want:"<<endl;
    cin>>n;
    cout<<"please enter p you want:"<<endl;
    cin>>p;
    for (int i=1;i<=n;++i)
    {
        j=i*j;
    }
    while (j%p==0)
    {
        num++;
        j=j/p;
    }
cout<<num<<endl;
    return 0;
}
