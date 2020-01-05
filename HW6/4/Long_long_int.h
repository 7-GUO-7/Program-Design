#ifndef LONG_LONG_INT_H_INCLUDED
#define LONG_LONG_INT_H_INCLUDED
using namespace std;
#include <iostream>
class long_long_int
{
    int *number;
    int len_of_number;
public:
    long_long_int(char *ch);
    long_long_int();
    long_long_int(const long_long_int &T);
    void add(const long_long_int &a1,const long_long_int &a2);
    void display();
    ~long_long_int() {delete [] number;}
    long_long_int &operator =(const long_long_int &T);
};

#endif // LONG_LONG_INT_H_INCLUDED
