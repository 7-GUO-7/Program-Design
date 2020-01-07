#include <iostream>
#include "perfect_int.h"
using namespace std;

int main()
{
    perfect_int perfect_int_now;

    perfect_int_now.add(5,3);
    perfect_int_now.add(-123456787654345,3);
    perfect_int_now.add(2,123456789765432345);
    perfect_int_now.add(1147483647,1147483647);
    cout<<endl;

    perfect_int_now.minus_(1,-5);
    perfect_int_now.minus_(-123456787654345,3);
    perfect_int_now.minus_(2,123456789765432345);
    perfect_int_now.minus_(-1147483647,1147483647);
    cout<<endl;

    perfect_int_now.multiply(1,-5);
    perfect_int_now.multiply(-123456787654345,3);
    perfect_int_now.multiply(2,123456789765432345);
    perfect_int_now.multiply(-1147483647,1147483647);
    cout<<endl;

    perfect_int_now.divide(1,-5);
    perfect_int_now.divide(-123456787654345,3);
    perfect_int_now.divide(2,123456789765432345);
    perfect_int_now.divide(123,0);
    return 0;
}
