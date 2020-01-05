#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle(int m,int n)
{
    a=m;b=n;
}

void rectangle::area()
{
    cout<<"area is: "<<a*b<<endl;
}

void rectangle::perimeter()
{
    cout<<"perimeter is: "<<2*(a+b)<<endl;
}

void rectangle::show_length_width()
{
    cout<<"length= "<<a<<endl;
    cout<<"width= "<<b<<endl;
}

square::square(int p):rectangle(p,p){}

void square::show_length()
{
    cout<<"each length is: "<<a<<endl;
}
