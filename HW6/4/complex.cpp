#include "complex.h"

complex_::complex_(char *a, char *b)
{
    long_long_int number1(a);
    long_long_int number2(b);
    real=number1;
    imaginary=number2;
}

void complex_::add(const complex_ &c1, const complex_ &c2)
{
    char c[]="0";
    long_long_int number_sum(c);
    number_sum.add(c1.real,c2.real);
    real=number_sum;
    long_long_int number_sum2(c);
    number_sum2.add(c1.imaginary,c2.imaginary);
    imaginary=number_sum2;
}

void complex_::print()
{
    real.display();
    cout<<' '<<'+'<<' ';
    imaginary.display();
    cout<<'i'<<endl;
}

complex_ operator+(const complex_ &c1, const complex_ &c2)
{
    complex_ tmp;
    tmp.real.add(c1.real,c2.real);
    tmp.imaginary.add(c1.imaginary,c2.imaginary);
    return tmp;
}
