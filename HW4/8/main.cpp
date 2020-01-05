#include <iostream>
using namespace std;
#include "complex.h"

int main()
{
    double a,b;
    complex_ c1,c2,c3,c4;
    cout<<"please enter the first complex number(real part and imaginary part):"<<endl;
    cin>>a>>b;
    c1.create(a,b);
    c1.out();
    cout<<"please enter the second complex number(real part and imaginary part):"<<endl;
    cin>>a>>b;
    c2.create(a,b);
    c2.out();
    cout<<endl;
    c3.add(c1,c2);
    c3.out();
    c4.multiply(c1,c2);
    c4.out();
}
