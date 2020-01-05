#include "complex.h"

void complex_::add(const complex_ &c1, const complex_ &c2)
{
    real=c1.real+c2.real;
    imaginary=c1.imaginary+c2.imaginary;
}

void complex_::multiply(const complex_ &c1, const complex_ &c2)
{
    real=c1.real*c2.real-c1.imaginary*c2.imaginary;
    imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
}
