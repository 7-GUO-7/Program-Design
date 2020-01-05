#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <iostream>
using namespace std;

class complex_{

private:
    double real;
    double imaginary;
public:
    void create(double a,double b)
    {real=a;imaginary=b;}
    void add(const complex_ &c1, const complex_ &c2);
    void multiply(const complex_ &c1,const complex_ &c2);
    void out()
    {cout<<real<<'+'<<imaginary<<'i'<<endl;}
};

#endif // COMPLEX_H_INCLUDED
