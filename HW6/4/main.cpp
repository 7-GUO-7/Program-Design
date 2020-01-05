#include <iostream>
#include "Long_long_int.h"
#include "complex.h"
using namespace std;

int main()
{
    complex_ c1("1234567","24680");
    cout<<"c1 is: "<<endl;
    c1.print();
    complex_ c2("90807060","12345");
    cout<<"c2 is: "<<endl;
    c2.print();
    complex_ c3;
    cout<<"c3 = c1 + c2 "<<endl;
    cout<<"c3 is : "<<endl;
    c3=c1+c2;
    c3.print();
}
