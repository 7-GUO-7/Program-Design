#include "Long_long_int.h"
#include <iostream>
using namespace std;

int main()
{
    char a[]="12345678987654321";
    char b[]="1357908642";
    char c[]="0";
    long_long_int number1(a),number2(b),number_sum(c),number3(number2);
    number1.display();
    cout<<endl;
    number2.display();
    cout<<endl;
    number_sum.add(number1,number2);
    number_sum.display();
    cout<<endl;
    number3.display();
    return 0;
}
