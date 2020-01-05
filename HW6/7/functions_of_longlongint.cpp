#include <cstring>
#include <algorithm>
#include <memory>
#include "Long_long_int.h"
using namespace std;

long_long_int::long_long_int()
{}

long_long_int::long_long_int(char *ch)
{
    if (ch[0]!='-')
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
    arr[255]=1;
    number=arr;
    }
    else
    {
    int *arr;
    len_of_number=strlen(ch)-1;
    arr=new int[256];
    for (int i=0;i<len_of_number;++i)
    {
        arr[i]=ch[len_of_number-i]-48;
    }
    for (int k1=len_of_number;k1<256;++k1)
        arr[k1]=0;
    arr[255]=-1;
    number=arr;
    }
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

int compare(const long_long_int &c1, const long_long_int &c2)
{
    if (c1.len_of_number>c2.len_of_number)
        return 1;
    if (c1.len_of_number<c2.len_of_number)
        return -1;
    if (c1.len_of_number==c2.len_of_number)
    {
        for (int k1=c1.len_of_number-1;k1>=0;--k1)
        {
            if (c1.number[k1]>c2.number[k1])
                return 1;
            if (c1.number[k1]<c2.number[k1])
                return -1;
        }
        return 0;
    }
}

void long_long_int::display()
{   int flag=0;
    if (number[255]==-1)
        cout<<'-';
    for (int j=254;j>=0;--j)
    {
        if (number[j]!=0)
            flag=1;
        if (flag)
            cout<<number[j];
    }
    if (!flag)
        cout<<'0';
}

void long_long_int::add(const long_long_int &a1,const long_long_int &a2)
{
    if (a1.number[255]==1&&a2.number[255]==1)
    {
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=a1.number[i1]+a2.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    new_arr[255]=1;
    number=new_arr;
    if (number[len_all-1]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;
    }


    if (a1.number[255]==-1&&a2.number[255]==-1)
    {
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=a1.number[i1]+a2.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    new_arr[255]=-1;
    number=new_arr;
    if (number[len_all-1]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;
    }


    if (a1.number[255]==-1&&a2.number[255]==1)
    {
    if (compare(a1,a2)==-1)
    {int *tmp;
    tmp=new int [256];
    for (int k=0;k<a1.len_of_number;++k)
        tmp[k]=-a1.number[k];
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=tmp[i1]+a2.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    number=new_arr;
    if (number[len_all-1]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;

    j=0;
    for (i1=0;i1<len_of_number;++i1)
    {
        number[i1]-=j;
        if (number[i1]<0)
            {j=1;number[i1]+=10;}
        else
            j=0;
    }
    delete [] tmp;
    }

    if (compare(a1,a2)==1)
    {int *tmp;
    tmp=new int [256];
    for (int k=0;k<a2.len_of_number;++k)
        tmp[k]=-a2.number[k];
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=tmp[i1]+a1.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    number=new_arr;
    if (number[len_all-1]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;

    j=0;
    for (i1=0;i1<len_of_number;++i1)
    {
        number[i1]-=j;
        if (number[i1]<0)
            {j=1;number[i1]+=10;}
        else
            j=0;
    }
    number[255]=-1;
    delete [] tmp;
    }
    if (compare(a1,a2)==0)
        for (int i1=0;i1<256;++i1)
        number[i1]=0;
    len_of_number=0;
    }


    if (a1.number[255]==1&&a2.number[255]==-1)
    {
    if (compare(a1,a2)==-1)
    {int *tmp;
    tmp=new int [256];
    for (int k=0;k<a1.len_of_number;++k)
        tmp[k]=-a1.number[k];
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=tmp[i1]+a2.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    number=new_arr;
    if (number[len_all]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;

    j=0;
    for (i1=0;i1<len_of_number;++i1)
    {
        number[i1]-=j;
        if (number[i1]<0)
            {j=1;number[i1]+=10;}
        else
            j=0;
    }
    number[255]=-1;
    delete [] tmp;
    }

    if (compare(a1,a2)==1)
    {int *tmp;
    tmp=new int [256];
    for (int k=0;k<a2.len_of_number;++k)
        tmp[k]=-a2.number[k];
    int *new_arr,len_all;
    len_all=max(a1.len_of_number,a2.len_of_number)+1;
    new_arr=new int[256];
    for (int j1=0;j1<255;++j1)
    {
        new_arr[j1]=0;
    }
    int j=0;
    int i1=0;
    for (i1=0;i1<len_all;++i1)
    {
            new_arr[i1]=tmp[i1]+a1.number[i1]+j;
            if (new_arr[i1]>=10)
                j=1;
            else
                j=0;
            new_arr[i1]=(new_arr[i1]%10);
    }
    number=new_arr;
    if (number[len_all]) //judge whether the first number is 0, if yes, length=length-1, else length=length
        len_of_number=len_all;
    else
        len_of_number=len_all-1;

    j=0;
    for (i1=0;i1<len_of_number;++i1)
    {
        number[i1]-=j;
        if (number[i1]<0)
            {j=1;number[i1]+=10;}
        else
            j=0;
    }
    delete [] tmp;
    }
    if (compare(a1,a2)==0)
        for (int i1=0;i1<256;++i1)
        number[i1]=0;
    len_of_number=0;
    }
}

long_long_int operator+(const long_long_int &c1, const long_long_int &c2)
{
    char c[]="0";
    long_long_int tmp(c);
    tmp.add(c1,c2);
    return tmp;
}

long_long_int operator- (const long_long_int &c1, const long_long_int &c2)
{
    char c[]="0";
    long_long_int reverse_=c2;
    reverse_.negative();
    long_long_int tmp(c);
    tmp.add(c1,reverse_);
    return tmp;
}

new_long_long_int::new_long_long_int(char *ch):long_long_int(ch){}

void long_long_int::negative()
{
    if (number[255]==1)
        number[255]=-1;
    if (number[255]==-1)
        number[255]=1;
}
