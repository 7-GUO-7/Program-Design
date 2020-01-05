#include <iostream>
#include "vector.h"
using namespace std;
int error=0;
int vector_::num=0;
int vector_::alive=0;
vector_::vector_(int input_dim)
{
    ++num;++alive;
    dim=input_dim;
    data=new int [dim];
    for (int i=0;i<dim;++i)
        data[i]=0;
}

vector_::~vector_()
{
    --alive;
    delete [] data;
}

vector_::vector_(const vector_ &vec)
{
    num++;alive++;
    dim=vec.dim;
    data=new int [dim];
    for (int i=0;i<dim;++i)
        data[i]=vec.data[i];
}

vector_ vector_::operator+(const vector_ &vec) const
{
    vector_ v1(dim);
    v1.dim=dim;
    v1.data=new int [dim];
    for (int i=0;i<dim;++i)
        v1.data[i]=data[i]+vec.data[i];
    return v1;
}

int & vector_::operator[](int index)
{
    if (index<0||index>dim-1)
        {cout<<"out of range!"<<endl;return error;}
    else
        return data[index];
}

istream & operator>>(istream &in, vector_ &vec)
{
    cout<<"The dimension of this vector is:"<<' '<<vec.dim<<endl;
    cout<<"Please enter the elements one by one:"<<endl;
    for (int i=0;i<vec.dim;++i)
        in>>vec.data[i];
    return in;
}

ostream & operator<<(ostream &os, vector_ &vec)
{
    os<<"The dimension of this vector is:"<<' '<<vec.dim<<'\n';
    os<<"The elements are:"<<'\n';
    for (int i=0;i<vec.dim;++i)
        os<<vec.data[i]<<' ';
        os<<'\n';
    return os;
}

vector_ & vector_::operator=(const vector_ &vec)
{
    if (this==&vec) return *this;
    delete [] data; // if the length of new vector_ is not the same as the original one, then when you do "=", it will occur error, because these two data space are not equal. So you need to delete and create a new int array. Just for safety.
    dim=vec.dim;
    data=new int[dim];
    for (int i=0;i<dim;++i)
        data[i]=vec.data[i];
    return *this;
}

void vector_::print_dim()
{
    cout<<"The dimension of this vector is:"<<endl;
    cout<<dim<<endl;
}

bool operator==(const vector_ &c1, const vector_ &c2)
{
    bool flag=1;
    if (c1.dim!=c2.dim)
        flag=0;
    else
    {
        for (int i=0;i<c1.dim;++i)
        {
            if (c1.data[i]!=c2.data[i])
            {flag=0;break;}
        }
    }
    if (flag)
        return 1;
    else
        return 0;
}

bool operator!=(const vector_ &c1, const vector_ &c2)
{
    bool flag=1;
    if (c1.dim!=c2.dim)
        flag=0;
    else
    {
        for (int i=0;i<c1.dim;++i)
        {
            if (c1.data[i]!=c2.data[i])
            {flag=0;break;}
        }
    }
    if (flag)
        return 0;
    else
        return 1;
}

vector_ & vector_::operator++()
{
    for (int i=0;i<dim;++i)
        data[i]++;
    return *this;
}

vector_ & vector_::operator--()
{
    for (int i=0;i<dim;++i)
        data[i]--;
    return *this;
}

vector_::operator double() const
{
    return double(dim);
}

void vector_::show_num()
{
    cout<<vector_::num<<endl;
}

void vector_::show_alive()
{
    cout<<vector_::alive<<endl;
}
