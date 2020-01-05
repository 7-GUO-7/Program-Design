#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>
#include "Long_long_int.h"
using namespace std;

class complex_{

private:
    long_long_int real;
    long_long_int imaginary;
public:
    complex_(char *a,char *b);
    complex_(){}
    void add(const complex_ &c1, const complex_ &c2);
    friend complex_ operator+(const complex_ &c1, const complex_ &c2);
    void print();
};


#endif // COMPLEX_H_INCLUDED
