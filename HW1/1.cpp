#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double r,pi=3.14,S,V;
cout<<"input the radius:"<<endl;
cin>>r;
S=4*pi*r*r;
cout<<"the square is:"<<endl;
cout<<S<<endl;
V=4/3*pi*r*r*r;
cout<<"the volume is:"<<endl;
cout<<V<<endl;
return 0;
}
