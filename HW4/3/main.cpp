#include <iostream>

using namespace std;

struct number_I
{int real;int imaginary;};

void add(const number_I &s1,const number_I &s2)
{
    int a=s1.real+s2.real;
    int b=s1.imaginary+s2.imaginary;
    cout<<a<<'+'<<b<<'i'<<endl;
}

void multiply(const number_I &s1,const number_I &s2)
{
    int c=s1.real*s2.real-s1.imaginary*s2.imaginary;
    int d=s1.real*s2.imaginary+s1.imaginary*s2.real;
    cout<<c<<'+'<<d<<'i'<<endl;
}

int main()
{
    number_I number1={1,2};
    number_I number2={3,4};
    add(number1,number2);
    multiply(number1,number2);
    return 0;
}
