#include <iostream>
#include "Long_long_int.h"
using namespace std;

int main()
{
    char a[]="12345";
    char b[]="-54321";
    char c[]="54321";
    char d[]="-12345654321";

    new_long_long_int number1(a);
    new_long_long_int number2(b);
    new_long_long_int number3(c);
    new_long_long_int number4(d);

    (number1+number2).display();
    cout<<endl;
    (number1-number2).display();
    cout<<endl;
    (number2+number3).display();
    cout<<endl;
    (number1+number4).display();
    cout<<endl;
    return 0;
}
