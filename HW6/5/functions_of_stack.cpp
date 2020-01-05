#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack(int size_1)
{
    num=0;
    size_=size_1;
    p= new int[size_];
}

Stack::~Stack()
{
    delete [] p;
}

void Stack::Push(int number)
{
    if (num<size_)
    {
        p[num]=number;
        num++;
    }
    else
        cout<<"The Stack is Full!"<<endl;
}

void Stack::Pop(int t)
{
    int tmp=num;
    for (int i=num-1;i>num-t-1;--i)
    {
        if (i<0)
        {cout<<"The Stack is Empty!"<<endl;break;}
        else
        {
            cout<<p[i]<<endl;tmp--;
        }
    }
    num=tmp;
}
