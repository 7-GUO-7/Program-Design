#include "matrix.h"
#include <iostream>
#include <cassert>
using namespace std;

bool judge(matrix &c1, matrix &c2)
{
    bool flag=1;
    if (c1.row!=c2.row||c1.column!=c2.column)
        flag=0;
    return flag;
}
matrix::matrix(int a,int b)
{
    row=a;
    column=b;
    data=new int *[row];
    for (int i=0;i<row;++i)
    {
        data[i]=new int [column];
    }
}

matrix::~matrix()
{
    for (int i=0;i<row;++i)
    {
        delete [] data[i];
    }
    delete [] data;
}

istream & operator>>(istream &in, matrix &c1)
{
    cout<<"The size of this matrix is:  "<<c1.row;
    cout<<" x ";
    cout<<c1.column<<endl;
    cout<<"Please enter the elements one by one:  "<<endl;
    for (int i=0;i<c1.row;++i)
    {
        for (int j=0;j<c1.column;++j)
        {
            in>>c1.data[i][j];
        }
    }
    return in;
}

int matrix::operator()(int a,int b)
{
    return data[a][b];
}

matrix operator+(const matrix &c1,const matrix &c2)
{
    matrix tmp(c1.row,c1.column);
    for (int i=0;i<c1.row;++i)
    {
        for (int j=0;j<c1.column;++j)
        {
            tmp.data[i][j]=c1.data[i][j]+c1.data[i][j];
        }
    }
    return tmp;
}

matrix matrix::transpose()
{
    matrix tmp(column,row);
    for (int i=0;i<row;++i)
    {
        for (int j=0;j<column;++j)
        {
            tmp.data[j][i]=data[i][j];
        }
    }
    return tmp;
}



matrix operator*(const matrix &c1,const matrix &c2)
{
    int sum,i1,i2;
    matrix tmp(c1.row,c2.column);
    for (int i=0;i<c1.row;++i)
    {
        for (int j=0;j<c2.column;++j)
        {
            sum=0;
            for (i1=0;i1<c1.column;++i1)
            {
                sum+=c1.data[i][i1]*c2.data[i1][j];
            }
            tmp.data[i][j]=sum;
        }
    }
    return tmp;
}

