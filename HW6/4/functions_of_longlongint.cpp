#include "Long_long_int.h"
#include <iostream>
#include <cstring>
#include <algorithm>
#include <memory>
using namespace std;

long_long_int::long_long_int()
{}

long_long_int::long_long_int(char *ch)
{
    int *arr;
    len_of_number=strlen(ch);
    arr=new int[256];
    for (int i=0;i<len_of_number;++i)
    {
        arr[i]=ch[len_of_number-i-1]-48;
    }
    for (int k1=len_of_number;k1<256;++k1)
        arr[k1]=0;
    number=arr;

}

long_long_int::long_long_int(const long_long_int &T)
{
    delete[] number;
    len_of_number=T.len_of_number;
    number=new int[256];
    for (int p=0;p<256;++p)
    number[p]=T.number[p];
}

long_long_int &long_long_int::operator =(const long_long_int &T)
{
    delete[] number;
    len_of_number=T.len_of_number;
    number=new int[256];
    for (int p=0;p<256;++p)
    number[p]=T.number[p];
    return *this;
}

void long_long_int::display()
{   int flag=0;
    for (int j=255;j>=0;--j)
    {
        if (number[j]!=0)
            flag=1;
        if (flag)
            cout<<number[j];
    }
}

void long_long_int::add(const long_long_int &a1,const long_long_int &a2)
{
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    for (int i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=a1.number[i1]+a2.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    number=new_arr;
    if (number[len_all])
        len_of_number=len_all;
    else
        len_of_number=len_all-1;
}
