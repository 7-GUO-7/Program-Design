#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED
#include <iostream>
using namespace std;
class matrix
{
    int row;
    int column;
    int **data;
public:
    friend bool judge(matrix &c1, matrix &c2);
    matrix(int a,int b);
    ~matrix();
    friend istream & operator>>(istream &in, matrix &c1);
    int operator() (int a,int b);
    friend matrix operator+(const matrix &c1,const matrix &c2);
    friend matrix operator*(const matrix &c1,const matrix &c2);
    matrix transpose();
};


#endif // MATRIX_H_INCLUDED
