#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    complex_ C1(1,2),C2(3,4);
    (C1+C2).show();
    (C1*C2).show();
    return 0;
}
