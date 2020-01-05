#include "complex.h"
#include <iostream>
complex_::complex_(int a,int b)
{
    real=a;imaginary=b;
}
complex_ complex_::operator+(const complex_ &C1) const
{
    complex_ temp(real + C1.real,imaginary+C1.imaginary);
    return temp;
}
complex_ complex_::operator*(const complex_ &C1) const
{
    complex_ temp(real*C1.real-imaginary*C1.imaginary,real*C1.imaginary+imaginary*C1.real);
    return temp;
}
