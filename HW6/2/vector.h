#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <iostream>
using namespace std;
class vector_
{
    int dim;
    int *data;
public:
    static int num;
    static int alive;
    vector_(int input_dim);
    ~vector_();
    vector_(const vector_ &vec);
    vector_ operator+(const vector_ &vec) const;
    int & operator[](int index);
    friend istream & operator>>(istream &in, vector_ &vec);
    friend ostream & operator<<(ostream &os, vector_ &vec);
    vector_ &operator=(const vector_ &vec);
    void print_dim();
    friend bool operator==(const vector_ &c1,const vector_ &c2);
    friend bool operator!=(const vector_ &c1,const vector_ &c2);
    vector_ &operator ++();
    vector_ &operator --();
    operator double () const;
    static void show_num();
    static void show_alive();
};


#endif // VECTOR_H_INCLUDED
