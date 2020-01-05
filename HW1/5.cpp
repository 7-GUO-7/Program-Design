#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double height,ans,ans2;
    cout<<"please enter your height (m):"<<endl;
    cin>>height;
    height=height/1000;
    ans=sqrt(pow((6371+height),2)-6371*6371);
    cout<<ans<<"km"<<endl;
    ans2=sqrt(500*500+6371*6371)-6371;
    cout<<"stand "<<ans2<<"km high"<<endl;
    return 0;
}
