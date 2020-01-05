#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
using namespace std;
class complex_
{
    int real;
    int imaginary;
public:
    complex_(int a,int b);
    complex_ operator+(const complex_ &C1) const;
    complex_ operator*(const complex_ &C1) const;
    show()
    {
        cout<<real<<'+'<<imaginary<<'i'<<endl;
    }
};


#endif // COMPLEX_H_INCLUDED
