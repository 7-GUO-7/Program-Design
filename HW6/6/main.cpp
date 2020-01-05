#include <iostream>
#include "rectangle.h"
using namespace std;

int main()
{
    rectangle c1(1,2);
    c1.area();
    c1.perimeter();
    c1.show_length_width();

    square c2(3);
    c2.area();
    c2.perimeter();
    c2.show_length();
    return 0;
}
