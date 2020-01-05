#ifndef LONG_LONG_INT_H_INCLUDED
#define LONG_LONG_INT_H_INCLUDED
using namespace std;
#include <iostream>
class long_long_int
{
protected:
    int *number;
    int len_of_number;
public:
    long_long_int(char *ch);
    long_long_int();
    long_long_int(const long_long_int &T);
    void add(const long_long_int &a1,const long_long_int &a2);
    void display();
    friend int compare(const long_long_int &c1, const long_long_int &c2);
    ~long_long_int() {delete [] number;}
    long_long_int &operator =(const long_long_int &T);
    void negative();
    friend long_long_int operator+ (const long_long_int &c1, const long_long_int &c2);
    friend long_long_int operator- (const long_long_int &c1, const long_long_int &c2);
};

class new_long_long_int : public long_long_int
{
public:
    new_long_long_int(char *ch);

};

#endif // LONG_LONG_INT_H_INCLUDED
