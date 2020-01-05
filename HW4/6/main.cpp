#include <iostream>
using namespace std;
#include "math.h"

int main()
{
    int x1,x2,sum1;
    cout<<"please enter the first number:"<<endl;
    x1=input_integer();
    cout<<"please enter the second number:"<<endl;
    x2=input_integer();
    sum1=sum(x1,x2);
    output_integer(sum1);
    return 0;
}
